n, m = map(int, input().split())
a = [[int(ai) for ai in input().split()] for j in range(n)]
q = int(input())
e1 = e2 = 0
for qi in range(q):
    i, j = map(int, input().split())
    if e1 != -1 and i >= 1 and  i <= n and j >= 1 and j <= m:
        e1 += a[i - 1][j - 1]
    else:
        e1 = -1
    if e2 != -1 and i >= 1 and  i <= m and j >= 1 and j <= n:
        e2 += a[j - 1][i - 1]
    else:
        e2 = -1
print(max(e1, e2))
