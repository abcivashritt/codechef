for _ in range(int(input())):
    n, k = map(int, input().split())
    a = []
    if k >= n * (n+1) // 2:
        a = [1] * n
        a[n-1] = k - (n * (n+1) // 2) + 1
        print(*a)
    else:
        print(-1)
