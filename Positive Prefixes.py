for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [*range(-1, -n-1, -1)] 
    i = 0
    while i < n and k > 0:
        a[i] = -a[i]
        i += 2
        k -= 1
    i = n - 1
    while i >= 0 and k > 0:
        if a[i] < 0:
            a[i] = -a[i]
            k -= 1
        i -= 1
    print(*a)
