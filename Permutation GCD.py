for _ in range(int(input())):
    n, x = map(int, input().split())
    x -= n
    if x >= 0 and x < n:
        a = [None] * n
        a[0] = x + 1
        k = 1
        for i in range(1, n+1):
            if i == a[0]:
                continue
            a[k] = i
            k += 1
        print(*a)
    else:
        print(-1)
