for _ in range(int(input())):
    n, k = map(int, input().split())
    k = min(k, n//2)
    k = min(n-1, 2*k)
    print(n*k - (k * (k+1) // 2))
