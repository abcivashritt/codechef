for _ in range(int(input())):
    n = int(input())
    a = [[0, 0] for i in range(n)]
    for i, ai in enumerate(input().split()):
        a[i][0] = int(ai)
    for i, ai in enumerate(input().split()):
        a[i][1] = int(ai)
    a = [a[n-1]] + a + [a[0]]
    b = []
    for i in range(1, n+1):
        if a[i-1][0] + a[i+1][0] < a[i][1]:
            b.append(a[i][1])
    print(-1 if not b else max(b))
