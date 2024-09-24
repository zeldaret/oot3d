import sys
import re
from pathlib import Path
from typing import Tuple, Set

vfe_section = f"""
\tAREA ||.arm_vfe_header||, DATA, READONLY, NOALLOC, ALIGN=2

\tDCD      0x00000000
"""


def is_branch_instruction(instruction: str) -> bool:
    return instruction.startswith('b') and not (instruction.startswith('bf') or 
                                                instruction.startswith('bi') or
                                                instruction.startswith('bk') or
                                                instruction.startswith('bx') or
                                                instruction.startswith('blx'))


def get_defined_and_needed_symbols_from_dependency(dep: Path) -> Tuple[Set[str], Set[str]]:
    definedSymbols: Set[str] = set()
    neededSymbols: Set[str] = set()
    
    with open(dep, 'r') as depSource:
        depSourceLines = depSource.readlines()
        for depSourceLine in depSourceLines:
            splitLine = depSourceLine.strip().split(' ')

            if not depSourceLine.startswith("\t"):
                definedSymbol = depSourceLine.strip()
                definedSymbols.add(definedSymbol)
            
            if (len(splitLine) >= 1) and is_branch_instruction(splitLine[0]):
                    neededSymbol = splitLine[1]
                    neededSymbols.add(neededSymbol)
            
            if (len(splitLine) >= 3) and splitLine[1] == 'DCD' and not splitLine[2].startswith('0x'):
                neededSymbols.add(splitLine[2])
    return (definedSymbols, neededSymbols)


#arg1 = source file
#arg2 = output nonmatchings file
#arg3 = output nonmatchings file prefix
with open(sys.argv[1], 'r') as srcFile:
    outdependencies = []
    srcLines = srcFile.readlines()
    for srcLine in srcLines:
        srcLine = srcLine.strip()
        if srcLine.startswith("GLOBAL_ASM("):
            fname = srcLine[srcLine.index('(') + 2 : -2]
            outdependencies.append(fname)
    # if len(outdependencies) > 0:
    if True:
        definedSymbols: Set[str] = set()
        neededSymbols: Set[str] = set()

        with open(sys.argv[2], 'w+') as nonMatchingsFile:
            for dep in outdependencies:
                depPath: Path = Path(sys.argv[3] + dep)
                nonMatchingsFile.write(f"\tGET {depPath}\n")

                (definedSymbolsFromDep, neededSymbolsFromDep) = get_defined_and_needed_symbols_from_dependency(depPath)
                definedSymbols = definedSymbols.union(definedSymbolsFromDep)
                neededSymbols = neededSymbols.union(neededSymbolsFromDep)

            nonMatchingsFile.write("\n")
            for neededSymbol in neededSymbols:
                if neededSymbol not in definedSymbols:
                    nonMatchingsFile.write(f"\tEXTERN {neededSymbol}\n")

            nonMatchingsFile.write(vfe_section)

            nonMatchingsFile.write("\tEND\n")
