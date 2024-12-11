from collections import Counter

for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [int(ai) % m for ai in input().split()]
    b = [int(bi) % m for bi in input().split()]
    ca = Counter(a)
    cb = Counter(b)

    total = 0
    for k, v in ca.items():
        if (m - k) % m in cb:
            total += v * cb[(m - k) % m]
    print(total)
