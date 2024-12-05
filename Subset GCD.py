for _ in range(int(input())):
    n, k = map(int, input().split())
    print(*[ai * (n//k) for ai in range(1, k + 1)])
