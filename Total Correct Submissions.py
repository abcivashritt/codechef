for _ in range(int(input())):
    n = int(input())
    dd = {}
    for i in range(n * 3):
        s, vs = input().split()
        v = int(vs)
        if dd.get(s, -1) == -1:
            dd[s] = v
        else:
            dd[s] += v
    a = list(dd.values())
    a.sort()
    print(*a)
