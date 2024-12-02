for _ in range(int(input())):
    s = input()
    t = input()
    u = ""

    for si, ti in zip(s, t):
        if si == ti:
            u += "W" if si == "B" else "B"
        else:
            u += "B"
    print(u)
