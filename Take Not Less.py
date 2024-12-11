from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort()
    c = Counter(a)
    odd = False
    for ci in c.values():
        if ci % 2:
            odd = True
    print("Marichka" if odd else "Zenyk")
