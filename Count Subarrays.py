for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    total = [1] * (n + 1)
    for i in range(n):
        tot = a[i]
        for j in range(i+1, n):
            tot += a[j]
            if tot <= n:
                total[tot] += 1
            else:
                break
    print(*total[1:])
