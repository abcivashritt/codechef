from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    c = Counter(a)
    total = n
    for k, v in c.items():
        total = min(total, (n - v) * k)
    print(total)
