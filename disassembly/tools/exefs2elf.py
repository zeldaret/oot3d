# convert exefs to elf
import os
import struct
import subprocess
import sys

if 'DEVKITARM' not in os.environ:
    print('DEVKITARM environment variable is not set!')
    sys.exit(1)

DEVKITARM = os.environ.get('DEVKITARM')

CC = DEVKITARM + "/bin/arm-none-eabi-gcc"
CP = DEVKITARM + "/bin/arm-none-eabi-g++"
OC = DEVKITARM + "/bin/arm-none-eabi-objcopy"
LD = DEVKITARM + "/bin/arm-none-eabi-ld"

BASEROMDIR = 'baserom/'
WORKDIR = BASEROMDIR + 'workdir/'

os.makedirs(WORKDIR, exist_ok=True)

with open(BASEROMDIR + "exheader.bin", "rb") as f:
    exh = f.read(64)

(textBase, textPages, roPages, rwPages, bssSize) = struct.unpack('16x ii 12x i 12x i 4x i', exh)
textSize = textPages * 0x1000
roSize   = roPages * 0x1000
rwSize   = rwPages * 0x1000
bssSize  = (int(bssSize / 0x1000) + 1) * 0x1000

# print("textBase: {:08x}".format(textBase))
# print("textSize: {:08x}".format(textSize))
# print("roSize:   {:08x}".format(roSize))
# print("rwSize:   {:08x}".format(rwSize))
# print("bssSize:  {:08x}".format(bssSize))

if (textBase != 0x100000):
    print('WARNING: textBase mismatch, might be an encrypted exheader file.')

exefsPath = BASEROMDIR + '/exefs/'
with open(exefsPath + 'code.bin', "rb") as f:
    text = f.read(textSize)
    ro = f.read(roSize)
    rw = f.read(rwSize)

with open('tools/e2elf.ld', 'r') as f:
    ldscript = f.read()
ldscript = ldscript.replace('%memorigin%', str(textBase))
ldscript = ldscript.replace('%bsssize%', str(bssSize))

with open(WORKDIR + 'e2elf.ld', 'w') as ldfile:
    ldfile.write(ldscript)

with open(WORKDIR + 'text.bin', 'wb') as textfile:
    textfile.write(text)
with open(WORKDIR + 'ro.bin', 'wb') as rofile:
    rofile.write(ro)
with open(WORKDIR + 'rw.bin', 'wb') as datafile:
    datafile.write(rw)

objfiles = []
for pair in (('text', 'text'), ('ro', 'rodata'), ('rw', 'data')):
    desc, sec_name = pair
    obj_name = f'{WORKDIR}{desc}.o'
    subprocess.run([OC, '-I', 'binary', '-O', 'elf32-littlearm', '--rename-section', f'.data=.{sec_name}', f'{WORKDIR}{desc}.bin', obj_name])
    objfiles.append(obj_name)

subprocess.run([LD, '--accept-unknown-input-arch', '-T', f'{WORKDIR}e2elf.ld', '-o', f'{BASEROMDIR}baserom.elf'] + objfiles)
