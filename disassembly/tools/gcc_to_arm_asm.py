import sys
import os

def get_file_preamble(func_name: str):
    return f"""\tAREA |i.{func_name}|, CODE, READONLY
\tEXPORT {func_name}
"""


functions_to_not_split = [ "FUN_001000c0",
                           "FUN_001494f0",
                           "FUN_0014955c",
                           "FUN_00200040",
                           "FUN_0020f074",
                           "FUN_002faf24", "FUN_002faf2c",
                           "FUN_00400460", "FUN_00400544",
                           "FUN_00404758", "FUN_0040bfb8",
                           "FUN_004aa79c", "FUN_004aa914", "FUN_004aaaf0", "FUN_004aac64", "FUN_004aae30",
                           "FUN_004aaf7c", "FUN_004ab0b8", "FUN_004ab0d4", "FUN_004ab140", "FUN_004ab17c",
                           "FUN_004ab244", "FUN_004ab278", "FUN_004ab320", "FUN_004ab374", "FUN_004ab470",
                           "FUN_004ab4a0", "FUN_004ab544", "FUN_004ab594", "FUN_004ab684", "FUN_004ab6b4",
                           "FUN_004ab750", "FUN_004ab794", "FUN_004ab860", "FUN_004ab874", "FUN_004ab8b4",
                           "FUN_004ab8e4", "FUN_004ab96c", "FUN_004ab994", "FUN_004aba08", "FUN_004aba44",
                           "FUN_004abae8", "FUN_004abb08", "FUN_004abb6c", "FUN_004abba0", "FUN_004abc2c",
                           "FUN_004abc4c", "FUN_004abca8", "FUN_004abcd8", "FUN_004abd58", "FUN_004abd74",
                           "FUN_004abdc8", "FUN_004abdfc", "FUN_004abe8c", "FUN_004abeb0", "FUN_004abf14",
                           "FUN_004abf4c",
                           "FUN_004b0d9c", "FUN_004b0f14", "FUN_004b10f0", "FUN_004b1264", "FUN_004b1430",
                           "FUN_004b157c",
                           "FUN_004b739c", "FUN_004b7514", "FUN_004b76f0", "FUN_004b7864", "FUN_004b7a30",
                           "FUN_004b7b7c"
                           ]

outDir = sys.argv[2]
os.makedirs(outDir, exist_ok=True)


def isBranchInstruction(instruction: str) -> bool:
    return instruction.startswith('b') and not (instruction.startswith('bf') or 
                                                instruction.startswith('bi') or
                                                instruction.startswith('bk') or
                                                instruction.startswith('bx') or
                                                instruction.startswith('blx'))


with open(sys.argv[1], 'r') as disasm:
    Lines = disasm.readlines()
    currentFunction = ''
    currentFile = None

    currentFileNeededSymbols: list[str] = []
    currentFileDefinedSymbols: list[str] = []

    for line in Lines:
        if line.find("arm_func_start") >= 0:
            currentFunction = line.split(' ')[-1].strip()
            if currentFunction not in functions_to_not_split:
                if currentFile is not None and not currentFile.closed:
                    currentFile.write("\tEND\n")
                    currentFile.close()
                    currentFileNeededSymbols = []
                    currentFileDefinedSymbols = []
                currentFile = open(outDir + "/" + currentFunction + ".s", 'w+')
                currentFile.write(get_file_preamble(currentFunction))
                currentFile.write(f"{currentFunction}\n")
            else:
                currentFile.write(f"\tEXPORT {currentFunction}\n")
                currentFile.write(f"{currentFunction}\n")
            currentFileDefinedSymbols.append(currentFunction)
            # print(currentFunction)

        # gcc to arm syntax conversions
        if line.strip().startswith('.align'):
            continue

        line = line.replace('@', ';')
        if line.strip().endswith(':'):
            line = line.replace(':', '')
            currentFileDefinedSymbols.append(line.strip())

        # Specific hacks
        if line.strip().endswith(".4byte _00206000"):
            line = line.replace("_00206000", "0x00206000")
        if line.strip().endswith(".4byte _003c7080"):
            line = line.replace("_003c7080", "0x003c7080")
        if line.strip().endswith(".4byte _00400100"):
            line = line.replace("_00400100", "0x00400100")
        if line.strip().endswith(".4byte _00400c18"):
            line = line.replace("_00400c18", "0x00400c18")
        if line.strip().endswith(".4byte _004010c0"):
            line = line.replace("_004010c0", "0x004010c0")

        if line.strip().endswith("=0x0030db44"):
            line = line.replace("add", "addeq")
        if line.strip().endswith("=0x004885c4"):
            line = line.replace("add", "addlt")
        if line.strip().endswith("=0x004885c8"):
            line = line.replace("add", "addne")
        if line.strip().endswith("=0x004a7228"):
            line = line.replace("add", "addeq")
        if line.strip().endswith("=FUN_004a74c8"):
            line = line.replace("add", "addcs")
        if line.strip().endswith("=0x004a7404"):
            line = line.replace("add", "addcc")
        if line.strip().endswith("=0x004ad828"):
            line = line.replace("add", "addeq")
        if line.strip().endswith("=FUN_004adac8"):
            line = line.replace("add", "addcs")
        if line.strip().endswith("=0x004ada04"):
            line = line.replace("add", "addcc")
        if line.strip().endswith("=0x004b3e28"):
            line = line.replace("add", "addeq")
        if line.strip().endswith("=FUN_004b40c8"):
            line = line.replace("add", "addcs")
        if line.strip().endswith("=0x004b4004"):
            line = line.replace("add", "addcc")
        if line.strip().endswith("#0x84 @ =0x0041e938"):
            line = line.replace("add", "addne")
        if line.strip().endswith("add sp, sp"):
            line = line.replace("add sp, sp", "add sp, sp, r3")

        line = line.replace('.word', 'DCD')
        line = line.replace(': .4byte', ' DCD')
        line = line.replace('.byte', 'DCB')

        if currentFile is not None and not line.startswith('\tarm_func_start') and not line.startswith(currentFunction):
            currentFile.write(line)
