# convert exefs to elf
import os


CODE_BIN = 'baserom/exefs/code.bin'
DATADIR = 'data/'

DATA_CHUNK_FILE = 'data_chunks.txt'
RODATA_CHUNK_FILE = 'rodata_chunks.txt'
SHT__INIT_ARRAY_FILE = 'SHT__INIT_ARRAY.txt'


def prepare_dirs():
    os.makedirs(DATADIR, exist_ok=True)


def split_data_chunks_to_asm() -> None:
    with open(CODE_BIN, 'rb') as b:
        for chunks_file in [DATA_CHUNK_FILE, RODATA_CHUNK_FILE, SHT__INIT_ARRAY_FILE]:
            with open(chunks_file) as data:
                for line in data:
                    splitLine = line.split(',')
                    chunkName = splitLine[0]
                    chunkStart = int(splitLine[1].strip(), 16) - 0x100000
                    chunkEnd = int(splitLine[2].strip(), 16) - 0x100000
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


prepare_dirs()
split_data_chunks_to_asm()
