for _ in range(int(input())):
    n, k = map(int, input().split())
    a = []
    if k >= n * (n+1) // 2:
        ele = k // (n * (n + 1) // 2)
        a = [ele] * n
        k %= (n * (n + 1) // 2)
        j = 0
        while k > 0:
            a[j] *= 2
            k -= ((j + 1) * a[j] // 2)
            j += 1
    if k == 0:
        print(*a)
    else:
        print(-1)
