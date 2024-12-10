for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    print("YES" if (n == 1 or max(a) + min(a) <= k) else "NO")
