for _ in range(int(input())):
    n, k = map(int, input().split())
    print("YES" if (k >= n//2 and k <= (n+1)//2) else "NO")
