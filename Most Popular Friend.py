import sys

for _ in range(int(input())):
    n = int(input())
    a = [[int(ai)-1 for ai in input().split()] for i in range(n)]
    small = sys.maxsize
    small_ind = -1
    for i in range(n):
        vis = [False] * n
        q = [(i, 0)]
        vis[i] = True
        c = 0
        while bool(q):
            ind, dep = q.pop(0) 
            c += dep
            for aij in a[ind]:
                if not vis[aij]:
                    vis[aij] = True
                    q.append((aij, dep + 1))
        if small > c:
            small = c
            small_ind = i
    print(small_ind+1, f"{small / n:.6f}")

