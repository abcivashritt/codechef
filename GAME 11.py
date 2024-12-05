for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    b = [int(bi) for bi in input().split()]
    a.sort(reverse = True)
    b.sort(reverse = True)
    c = a[4:] + b[4:]
    c.sort(reverse = True)
    if len(a) >= 4 and len(b) >= 4 and len(a) + len(b) >= 11:
        print(sum(a[:4] + b[:4] + c[:3]))
    else:
        print(-1)
