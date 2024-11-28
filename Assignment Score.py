for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    diff = max(0, (n+1)*50 - sum(a))
    print(-1 if diff > 100 else diff)
