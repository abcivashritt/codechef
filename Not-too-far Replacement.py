for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a = sorted(a[:n]) + [a[n]]
    i = 0
    while i < n and a[i] < a[n]:
        i += 1
    while i < n and a[i] >= a[n] and a[i] <= 2*a[n]:
        a[i], a[n] = a[n], a[i]
        i += 1
    print(sum(a[:n]))
