from collections import Counter

for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    c = Counter(s)
    odd = sum([ci % 2 for ci in c.values()])
    even = len(c) - odd
    if odd >= 2:
        print(0)
    elif odd == 0:
        print(1)
    elif odd == 1:
        print(1 if even > 0 else 2)
