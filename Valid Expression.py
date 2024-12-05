for _ in range(int(input())):
    n, x = map(int, input().split())
    if x <= n+1 and x >= -(n-1):
        if x > 0:
            print('+' * (x - 1), end = "")
            print('*' * (n - x + 1))
        else:
            print('-' * (abs(x) + 1), end = "")
            print('*' * (n - abs(x) - 1))
    else:
        print(-1)
