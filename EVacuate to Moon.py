for _ in range(int(input())):
    n, m, h = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    b = [int(bi) for bi in input().split()]
    a.sort(reverse = True)
    b.sort(reverse = True)
    i = 0
    total = 0
    while i < n and i < m:
        total += min(a[i], b[i] * h)
        i += 1
    print(total)
