for _ in range(int(input())):
    n, m = map(int, input().split())
    s = "RG" * (m // 2) + ("R" if m % 2 else "")
    t = "GR" * (m // 2) + ("G" if m % 2 else "")
    ss = []
    tt = []
    for i in range(0, n, 2):
        ss.append(s)
        if i + 1 < n:
            ss.append(t)
        tt.append(t)
        if i + 1 < n:
            tt.append(s)
    total1 = 0
    total2 = 0
    for i in range(n):
        u = input().strip()
        for si, ti, ui in zip(ss[i], tt[i], u):
            if si != ui:
                total1 += (3 if si == 'R' else 5)
            if ti != ui:
                total2 += (3 if ti == 'R' else 5)
    print(min(total1, total2))
