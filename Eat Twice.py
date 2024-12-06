for _ in range(int(input())):
    n, m = map(int ,input().split())
    d = {}
    for i in range(n):
        di, vi = map(int, input().split())
        if di in d:
            d[di] = max(d[di], vi)
        else:
            d[di] = vi
    l = list(d.values())
    l.sort(reverse = True)
    print(sum(l[:2]))
