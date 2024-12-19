for _ in range(int(input())):
    n, k = map(int, input().split())
    print("YES" if (k <= n // 2 and ((n + 1) // 2 - k) % 2 == 0) else "NO")
