for _ in range(int(input())):
    n, h, y1, y2, l = map(int, input().split())
    h -= y1
    c = 0
    for i in range(n):
        ti , xi = map(int, input().split())
        if l > 0 and ti == 1 and h <= xi:
            c += 1
        elif l > 0 and ti == 2 and y2 >= xi:
            c += 1
        elif l > 1:
            l -= 1
            c += 1
        elif l == 1:
            l -= 1
    print(c)
