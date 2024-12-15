import math

for _ in range(int(input())):
    n = int(input())
    ss = set()
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            ss.add(i)
            ss.add(n // i)

    c = 0
    for ssi in ss:
        s = str(ssi)
        if '4' in s or '7' in s:
            c += 1

    print(c)
