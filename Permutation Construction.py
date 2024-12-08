for _ in range(int(input())):
    n = int(input())
    a = [0] * n
    k = 1
    for i in range(0, n, 2):
        a[i] = k
        k += 1
    for i in range(1, n, 2):
        a[i] = k
        k += 1
    print(*a)
