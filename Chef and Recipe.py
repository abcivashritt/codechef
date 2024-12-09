from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = set()
    cont = True
    unq = True
    for i in range(n):
        if a[i] not in b:
            b.add(a[i])
        else:
            if a[i] != a[i-1]:
                cont = False
    c = list(Counter(list(Counter(a).values())).values())
    unq = True if len(c) == c.count(1) else False
    print("YES" if (cont and unq) else "NO")
