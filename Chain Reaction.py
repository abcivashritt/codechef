for _ in range(int(input())):
    r, c = map(int, input().split())
    a = [None] * r
    for i in range(r):
        a[i] = list(map(int, input().split()))
    stable = True
    for i in range(r):
        for j in range(c):
            b = 0
            if i > 0:
                b += 1
            if i < r-1:
                b += 1
            if j > 0:
                b += 1
            if j < c-1:
                b += 1
            if a[i][j] >= b:
                stable = False
    print("Stable" if stable else "Unstable")
