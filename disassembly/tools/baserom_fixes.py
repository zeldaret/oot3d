import sys
import os

replacements = [
    ("add r0, pc, #0x84 @ =0x0041e938", "adrne r0, _0041e938")
]

with open(sys.argv[1], 'r') as baserom_before_fixes:
    before_fixes_data = baserom_before_fixes.read()

for (before, after) in replacements:
    after_fixes_data = before_fixes_data.replace(before, after)

with open(sys.argv[2], 'w+') as baserom_after_fixes:
    baserom_after_fixes.write(after_fixes_data)
