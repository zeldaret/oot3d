import os
import subprocess
import sys
from pathlib import Path

sourceFile: str = sys.argv[1]

includePaths: list[Path] = ["include",
                            "library/3ds_sdk/include",
                            "src/game"]

ccArgs = "-o ctx.c -E "
for include in includePaths:
    ccArgs = ccArgs + f"-I{include} "

if 'ARMCC_PATH' in os.environ:
    CC: Path = Path(os.environ['ARMCC_PATH']) / "win_32-pentium/armcc"
else:
    print("ARMCC_PATH environment variable is not set, trying gcc")
    CC: Path = Path("gcc")

subprocess.run(f"{CC} {ccArgs} {sourceFile}")
