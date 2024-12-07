for _ in range(int(input())):
    n = int(input())
    a = [i for i in range(1, n*n+1, 2)] + [i for i in range(2, n*n+1, 2)]
    for i in range(n):
        for j in range(n):
            print(a[i*n + j], end = " ")
        print()
