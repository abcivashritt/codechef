for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    c = {}
    for ai, bi in zip(a, input().split()):
        if c.get(ai) == None or c.get(ai) > int(bi):
            c[ai] = int(bi)
    print(-1 if len(c) < k else sum(sorted(list(c.values()))[:k]))
