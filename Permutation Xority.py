for _ in range(int(input())):
    n = int(input())
    if n == 2:
        print(-1)
    elif n % 2:
        print(*[i for i in range(1, n+1)])
    else:
        print(1, n, *[i for i in range(2, n)])
