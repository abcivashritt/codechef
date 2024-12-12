for _ in range(int(input())):
    n, m, k = map(int, input().split())
    total = min(2, min(n, m))
    q, k = divmod(k, total)
    print(0 if (n*m <= 2) else q + k)
