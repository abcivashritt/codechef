for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = set(a)
    c = 0
    max_c = 0
    total = 0
    for bi in b:
        if bi != 0:
            c = a.count(bi)
            total += (c * (c-1) // 2)
            max_c = max(c, max_c)
    total -= (max_c * (max_c - 1) // 2)
    max_c += a.count(0)
    total += (max_c * (max_c - 1) // 2)
    print(total)
