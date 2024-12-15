import sys

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    total = sys.maxsize
    c = 0
    for i in range(n):
        for j in range(i+1, n):
            if abs(a[i] + a[j] - k) < total:
                total = abs(a[i] + a[j] - k)
                c = 1
            elif abs(a[i] + a[j] - k) == total:
                c += 1
    print(total, c)
