#JUDGE ERROR - Cannot submit
for _ in range(int(input())):
    n = int(input())
    a = [[0] * n for i in range(n)]
    for i in range(n):
        for j in range(n):
            a[i][j] = i*n + j + 1
        if i % 2:
            a[i].reverse()
    for i in range(n):
        for j in range(n):
            print(a[i][j], end = " ")
        print()
