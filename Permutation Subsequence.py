from collections import Counter

MOD = 1000000007

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    cc = Counter(a)
    total = cc[1]
    ways = cc[1]
    i = 2
    while i in cc:
        ways *= cc[i]
        ways %= MOD
        total += ways
        total %= MOD
        i += 1
    print(total)
