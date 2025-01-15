for _ in range(int(input())):
    n, m, x, k = map(int, input().split())
    s = input().strip()
    evens = s.count('E')
    odds = s.count('O')
    total = min(evens, (m // 2) * x) + min(odds, ((m + 1) // 2) * x)
    print("yes" if total >= n else "no")
