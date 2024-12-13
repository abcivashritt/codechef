for _ in range(int(input())):
    a, b, c = map(int, input().split())
    a += b / 100
    c /= 100
    total = 0
    ind = 0
    largest = a
    rep = []
    while a >= c and a not in rep:
        rep.append(a)
        ind += 1
        a -= c
        s = f"{a:.2f}"
        if '.' not in s:
            s = s + ".0"
        a = int(s[s.index('.') + 1:]) + ( int(s[:s.index('.')]) / 100 )
        if largest < a:
            largest = a
            total = ind
    print(total)
