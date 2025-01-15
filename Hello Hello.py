for _ in range(int(input())):
    ss = input().split()
    d = float(ss[0])
    u = int(ss[1])
    n = int(ss[2])
    ans = 0
    total = d * u
    for i in range(n):
        ss = input().split()
        m = int(ss[0])
        r = float(ss[1])
        c = float(ss[2])
        if total > r * u + (c / m):
            ans = i + 1
            total = r * u + (c / m)
    print(ans)
