for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    diff = m - (max(a) * n - sum(a))
    print("Yes" if (diff >= 0 and diff%n == 0) else "No")
