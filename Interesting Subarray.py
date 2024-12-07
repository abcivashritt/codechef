for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort()
    print(min(a[0] * a[0], min(a[n-1] * a[n-1], a[0] * a[n-1])), max(a[0] * a[0], a[n-1] * a[n-1]))
