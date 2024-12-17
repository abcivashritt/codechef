for _ in range(int(input())):
    n = int(input())
    a = [0] * n
    k = 1
    for i in range(0, n, 2):
        a[i] = i + 1
    for i in range(0, n):
        if a[i] == 0:
            a[i] = 2 * a[i-1]
    print(*a)
