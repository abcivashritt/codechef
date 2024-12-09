a = [[1, 0, 0]]
b = [[1, 0, 0]]
for i in range(1, 1605+1):
    c = [0, 0, 0]
    d = b[len(b) - 1].copy()
    if i >= 2:
        c[1] = a[i-2][0]
        d[1] += a[i-2][0]
        d[0] -= a[i-2][0]
    if i >= 8:
        c[2] = a[i-8][1]
        d[2] += a[i-8][1]
        d[1] -= a[i-8][1]
    if i >= 16:
        c[0] = a[i-16][2] * 2
        d[0] += a[i-16][2] * 2
        d[2] -= a[i-16][2]
    a.append(c)
    b.append(d)
for _ in range(int(input())):
    n = int(input())
    print(*b[n-1])
