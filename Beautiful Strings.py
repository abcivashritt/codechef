MOD = 1000000007
from collections import Counter

for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    c = Counter(s)
    total = 1
    for vi in c.values():
        total *= (vi + 1)
        total %= MOD
    print(total-1)
