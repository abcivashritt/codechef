for _ in range(int(input())):
    n, x, y = map(int, input().split())
    print( min((n+99) // 100 * x, (n+3) // 4 * y, n // 100 * x + min((x if n > 0 else 0), (n % 100 + 3) // 4 * y)) )
