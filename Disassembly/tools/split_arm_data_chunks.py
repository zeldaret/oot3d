# convert exefs to elf
import os
import sys
from subprocess import run

# Ugliness in order to keep the script self-contained
try:
    import tqdm
except ImportError:
    print("Installing tqdm...")
    def command():
        return run([sys.executable, '-m', 'pip', 'install', 'tqdm'])

    # Sigh
    if (command().returncode != 0):
        # Package managers are cool, I say, as I close my eyes and
        # ram through software with reckless abandon.
        if (run([sys.executable, '-m', 'ensurepip']).returncode == 0):
            # Alright pip is set up, lets give it another shot. If it
            # doesn't work, then it's left up to the user.
            command().check_returncode()
finally:
    import tqdm

BASEROMDIR = 'baserom/'
WORKDIR = BASEROMDIR + 'workdir/'
DATADIR = 'data/'

DATA_CHUNK_FILE = 'data_chunks.txt'
RODATA_CHUNK_FILE = 'rodata_chunks.txt'
SHT__INIT_ARRAY_FILE = 'SHT__INIT_ARRAY.txt'

def prepare_dirs():
    os.makedirs(DATADIR, exist_ok=True)

def writefile(path, s) -> None:
    with open(path, "wb") as f:
        f.write(s)

def total_file_sizes() -> int:
    return os.path.getsize(DATA_CHUNK_FILE) + \
           os.path.getsize(RODATA_CHUNK_FILE) + \
           os.path.getsize(SHT__INIT_ARRAY_FILE)

def split_data_chunks_to_asm(progress: tqdm.tqdm) -> None:
    for (bin_file, chunks_file, offset) in [('rw.bin', DATA_CHUNK_FILE, 0x4F9000), ('ro.bin', RODATA_CHUNK_FILE, 0x4CA000), ('text.bin', SHT__INIT_ARRAY_FILE, 0x100000)]:
        with open(WORKDIR + bin_file, 'rb') as b:
            with open(chunks_file) as data:
                for line in data:
                    splitLine = line.split(',')
                    chunkName = splitLine[0]
                    chunkStart = int(splitLine[1].strip(), 16) - offset
                    chunkEnd = int(splitLine[2].strip(), 16) - offset
                    chunkSize = chunkEnd - chunkStart
                    b.seek(chunkStart)
                    chunkBin = b.read(chunkSize)

                    with open(DATADIR + chunkName + '.s', 'w') as chunkARM:
                        chunkARM.write(f"\tAREA |i.{chunkName}|, DATA, READWRITE\n\n")
                        chunkARM.write(f"; {chunkName} : @ 0x{splitLine[1].strip()}\n")
                        for i in range(0, chunkSize, 4):
                            dataWordArray = chunkBin[i:i+4][::-1] # we need to reverse words due to little-endianness
                            dataWordString = ''.join(hex(byte)[2:].upper().zfill(2) for byte in dataWordArray)
                            chunkARM.write(f"\tDCD 0x{dataWordString}\n")
                        chunkARM.write("\tEND\n")

                    progress.update(len(line))

with tqdm.tqdm(total=total_file_sizes()) as progress:
    prepare_dirs()
    split_data_chunks_to_asm(progress)
