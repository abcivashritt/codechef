for _ in range(int(input())):
    n = int(input())
    a = [ai for ai in range(1, n+1)]
    print(*a)
    print(*a[(n+1)//2:], *a[:(n+1)//2])
