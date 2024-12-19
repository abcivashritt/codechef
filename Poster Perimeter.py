for _ in range(int(input())):
    n, m, k = map(int, input().split())
    while m > 1 and 2 * (n + m) > k:
        m -= 1
    while n > 1 and 2 * (n + m) > k:
        n -= 1
    print(abs(k - 2 * (n+m)))
