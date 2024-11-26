ifor _ in range(int(input())):
    n, m = map(int, input().split())
    occ = [False] * n
    ans = []
    a = [None] * m
    for i in range(m):
        a[i] = tuple(map(int, input().split()))
    for i in range(m-1, -1, -1):
        if not occ[a[i][0]] and not occ[a[i][1]]:
            occ[a[i][0]] = True
            occ[a[i][1]] = True
            ans.append(i)
    print(*sorted(ans))
