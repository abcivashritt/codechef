for _ in range(int(input())):
    n = int(input())
    if n % 2:
        a = [[1] * n for i in range(n)]
        for i in range(n):
            a[i][i] = -1
        for i in range(n):
            print(*a[i])
    else:
        a = [[-1] * n for i in range(n)]
        for i in range(n):
            print(*a[i])
