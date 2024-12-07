for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    a.sort(reverse = True)
    print(a[0] + a[1] + a[n-1] + (a[k] if k > 1 else a[0]))
