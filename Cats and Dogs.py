for _ in range(int(input())):
    c, d, l = map(int, input().split())
    a = max(0, c - 2*d)
    print("yes" if (l <= (c+d)*4 and l >= (a+d)*4 and l%4 == 0) else "no")
