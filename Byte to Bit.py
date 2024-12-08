for _ in range(int(input())):
    n = int(input())
    a = [[1, 0, 0]]
    b = [[1, 0, 0]]
    for i in range(1, n+1):
        c = [0, 0, 0]
        d = b[len(b) - 1]
        if i >= 3:
            d[1] += a[i-3][0]
            d[0] -= a[i-3][0]
        if i >= 11:
            b[2] += a[i-11][0]
        if i >= 17:
            b[0] += a[i-17][2] * 2
            b[2] -= a[i-17][2]
        a.append(b)
    print(*a[len(a) - 1])
