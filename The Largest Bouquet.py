for _ in range(int(input())):
    a = [[int(ai) for ai in input().split()] for i in range(3)]
    t1 = [0] * 3
    t2 = [0] * 3
    for i in range(3):
        for j in range(3):
            t1[i] += a[i][j]
            t2[j] += a[i][j]
    l = max(max(t1), max(t2))
    print(l if (l%2 or l == 0) else l-1)
