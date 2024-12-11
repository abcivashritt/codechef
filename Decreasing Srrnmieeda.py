for _ in range(int(input())):
    l, r = map(int, input().split())
    print(-1 if l <= r//2 else r)
