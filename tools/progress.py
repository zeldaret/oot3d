import argparse
import json
import git
from pathlib import Path
import math

parser = argparse.ArgumentParser(description="Computes current progress throughout the whole project.")
parser.add_argument("format", nargs="?", default="text", choices=["text", "csv", "shield-json"])
args = parser.parse_args()


def ReadAllLines(fileName: Path) -> list[str]:
    with open(fileName) as f:
        return f.readlines()


def GetFiles(path: Path, ext) -> list[Path]:
    files: list[Path] = list()
    
    for (dirpath, _, filenames) in path.walk():
        for file in filenames:
            if Path(file).suffix == ext:
                files.append(dirpath / file)

    return files


def GetSizeOfASMSourceFile(asmSrc: Path) -> int:
    size: int = 0
    asmLines: list[str] = ReadAllLines(asmSrc)
    
    for asmLine in asmLines:
        if asmLine.startswith("\t"):
            asmLineStripped = asmLine.strip()
            if not (asmLineStripped.startswith("AREA") or 
                    asmLineStripped.startswith("EXPORT") or 
                    asmLineStripped.startswith("END") or 
                    asmLineStripped.startswith("DCD") or 
                    asmLineStripped.startswith("DCB")):
                size += 4
            elif asmLineStripped.startswith("DCD "):
                size += 4
            elif asmLineStripped.startswith("DCB "):
                size += len(asmLineStripped.split(','))

    size = 4 * math.ceil(size / 4.0)
    return size


def GetAllNonMatchingASMFunctionSourceFiles(nonmatchFiles: list[Path]) -> list[Path]:
    nonmatchASMFunctionSourceFiles: list[Path] = list()
    
    for nonmatchFile in nonmatchFiles:
        with open(nonmatchFile, 'r') as nonmatch:
            nonmatchLines: list[str] = nonmatch.readlines()
            for line in nonmatchLines:
                if line.startswith("\tGET") and line.count("disassembly\\asm") > 0:
                    nonmatchASMFunctionSourceFiles.append(Path(line.split(' ')[-1].strip()))
    
    return nonmatchASMFunctionSourceFiles


def GetTotalNonMatchSize() -> int:
    nonmatchFiles: list[Path] = GetFiles(Path("build/nonmatch"), ".s")
    nonMatchingASMFunctionSourceFiles: list[Path] = GetAllNonMatchingASMFunctionSourceFiles(nonmatchFiles)

    size: int = 0
    for nonMatchFunction in nonMatchingASMFunctionSourceFiles:
        size += GetSizeOfASMSourceFile(nonMatchFunction)
    return size


nonMatchingASMSize: int = GetTotalNonMatchSize()

totalSize: int = 0x3C97B8
srcSize: int = totalSize - nonMatchingASMSize

srcPct: float = 100.0 * srcSize / totalSize

bytesPerHeartPiece: float = totalSize / 80.0

if args.format == 'csv':
    version = 1
    git_object = git.Repo().head.object
    timestamp = str(git_object.committed_date)
    git_hash = git_object.hexsha
    csv_list = [str(version), timestamp, git_hash, str(srcSize), str(nonMatchingASMSize)]
    print(",".join(csv_list))
elif args.format == 'shield-json':
    # https://shields.io/endpoint
    print(json.dumps({
        "schemaVersion": 1,
        "label": "progress",
        "message": f"{srcPct:.3g}%",
        "color": 'yellow',
    }))
elif args.format == 'text':
    print(f"{totalSize} total bytes of decompilable code\n")
    print(f"{srcSize} bytes decompiled in src {srcPct}%\n")
    print("------------------------------------\n")

    heartPieces = int(srcSize / bytesPerHeartPiece)
    rupees = int(((srcSize % bytesPerHeartPiece) * 100) / bytesPerHeartPiece)

    if (rupees > 0):
        print(f"You have {heartPieces}/80 heart pieces and {rupees} rupee{"s" if rupees != 1 else ""}.\n")
    else:
        print(f"You have {heartPieces}/80 heart pieces.\n")
else:
    print(f"Unknown format argument: {args.format}")
