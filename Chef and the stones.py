import math

for _ in range(int(input())):
    n1, n2, m = map(int ,input().split())
    n1, n2 = min(n1, n2), max(n1, n2)
    diff = m * (m + 1) // 2
    if n1 < diff:
        n1, n2 = 0, n2 - n1
    else:
        n1 -= diff
        n2 -= diff
    print(n1 + n2) 
