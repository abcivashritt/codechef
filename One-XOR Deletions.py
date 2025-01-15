for _ in range(int(input())):
    n = int(input())
    a = {}
    total = n
    for ai in input().split():
        ai = int(ai)
        if ai in a:
            a[ai] += 1
        else:
            a[ai] = 1
    for ai in a.keys():
        total = min(total, n - a[ai])
        if ai ^ (ai + 1) <= 1 and (ai + 1) in a:
            total = min(total, n - a[ai] - a[ai + 1])
    print(total)
