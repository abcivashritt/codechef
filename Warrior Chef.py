for _ in range(int(input())):
    n, h = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    a.sort(reverse = True)
    ind = 0
    while ind < n and h - a[ind] > 0:
        h -= a[ind]
        ind += 1
    print(a[ind] if ind < n else 0)
