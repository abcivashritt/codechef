for _ in range(int(input())):
    n, k, l = map(int, input().split())
    if l < (n // k + (1 if n%k else 0)) or (k == 1 and n > 1):
        print(-1)
    else:
        a = [i for i in range(1, k+1)] * (n // k + 1)
        print(*a[:n])
