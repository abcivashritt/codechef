for _ in range(int(input())):
    n, r = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    left = a[0]
    right = a[0]
    if r < a[0]:
        left = 0
    else:
        right = 100000000000
    search = True
    for i in range(1, n-1):
        if r < a[i-1]:
            if a[i] < a[i-1] and a[i] >= left and a[i] <= right:
                if r < a[i]:
                    right = a[i]
                else:
                    left = a[i]
            else:
                search = False
        if r > a[i-1]:
            if a[i] > a[i-1] and a[i] >= left and a[i] <= right:
                if r < a[i]:
                    right = a[i]
                else:
                    left = a[i]
            else:
                search = False
    if a[n-1] < left or a[n-1] > right:
        search = False
    print("YES" if search else "NO")
