for _ in range(int(input())):
    n = int(input())
    b = [[int(bi) for bi in input().split()] for i in range(n)]
    f = 0

    a = []
    for i in range(n):
        for j in range(n):
            a.append((i, j))
    while True:
        c = [0] * (n * n)
        d = [0] * (n * n)
        for i in range(n):
            for j in range(n):
                c[b[i][j] - 1] = (i, j)
        for i in range(n*n):
            if a[i][0] != c[i][0]:
                d[i] = max(a[i][0], c[i][0])
            if a[i][1] != c[i][1]:
                d[i] = max(d[i], a[i][1], c[i][1])
        ind = max(d) + 1

        if ind > 1:
            e = list(map(list, zip(*[b[i][:ind] for i in range(ind)])))
            for i in range(ind):
                b[i][:ind] = e[i]
            f += 1
        else:
            break
    print(f)
