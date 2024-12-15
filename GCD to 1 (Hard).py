for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [[2] * m for i in range(n)]
    for i in range(min(n,m)):
        a[i][i] = 3
    for i in range(n, m):
        a[n - 1][i] = 3
    for i in range(m, n):
        a[i][m-1] = 3

    for i in range(n):
        print(*a[i])
