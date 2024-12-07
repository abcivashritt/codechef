import re

for _ in range(int(input())):
    d = int(input())
    s = input()
    c = s.count('P') + len(re.findall(r'(?=((.PA.P)|(.PAP.)|(P.A.P)|(P.AP.)))', s))
    print(max(0, (3*d+3)//4 - s.count('P')) if 3*d <= 4*c else -1)
