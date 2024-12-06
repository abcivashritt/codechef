for _ in range(int(input())):
    u, v = map(int, input().split())
    n = u + v
    print((n * (n+1)) // 2 + u + 1)
