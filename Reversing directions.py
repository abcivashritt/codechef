for _ in range(int(input())):
    n = int(input())
    d = []
    r = []

    for i in range(n):
        s = input().strip()
        t = s[:s.find(" ")]
        if t == "Right":
            d.append("Left")
        elif t == "Left":
            d.append("Right")
        t = s[s.find(" ", s.find(" ") + 1) + 1:]
        r.append(t)

    d.append("Begin")
    d.reverse()
    r.reverse()
    for di, ri in zip(d, r):
        print(di + " on " + ri)
    print()
