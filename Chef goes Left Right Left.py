for _ in range(int(input())):
    n, r = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    left = a[0]
    right = a[0]
    search = True
    for i in range(1, n - 1):
        if r < a[i-1]:
            if a[i] > a[i-1]:
                search = False
                break
            else:
                if r > a[i]:
                    left = a[i]
                else:
                    right = a[i]
        else:
            if a[i] < a[i-1]:
                search = False
                break
            else:
                if r > a[i]:
                    left = a[i]
                else:
                    right = a[i]
