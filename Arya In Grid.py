for _ in range(int(input())):
    n, m, x, y, l = map(int, input().split())
    print(((n-x)//l + (x-1)//l + 1) * ((m-y)//l + (y-1)//l + 1))
