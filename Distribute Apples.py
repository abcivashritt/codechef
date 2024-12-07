for _ in range(int(input())):
    n, k = map(int, input().split())
    print("NO" if n//k == (((n+k*k -1)//(k*k)) * k) else "YES")
