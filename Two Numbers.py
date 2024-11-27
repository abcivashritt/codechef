for _ in range(int(input())):
    a, b, n = map(int, input().split())
    if n%2:
        a = a<<1
    print(max(a,b)//min(a,b))
