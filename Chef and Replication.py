from collections import Counter

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    cc = Counter(a)
    total = 0
    added = False
    for key, value  in cc.items():
        if value == k:
            total += key
            added = True
    print(-1 if not added else total)
