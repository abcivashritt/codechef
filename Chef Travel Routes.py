_ = int(input())
ss = set(input().split())
dd = {}
for _ in range(int(input())):
    s, t, ds = input().split()
    d = int(ds)
    if dd.get(s, -1) == -1:
        dd[s] = {t: d}
    else:
        dd[s][t] = d
for _ in range(int(input())):
    ss2 = set()
    ll = input().split()
    total = 0
    for i in range(1, int(ll[0]) + 1):
        if ll[i] in ss2 or ll[i] not in ss:
            print("ERROR")
            break
        ss2.add(ll[i])
        if i > 1:
            if dd.get(ll[i-1], -1) == -1 or dd[ll[i-1]].get(ll[i], -1) == -1:
                print("ERROR")
                break
            else:
                total += dd[ll[i-1]][ll[i]]
    else:
        print(total)
