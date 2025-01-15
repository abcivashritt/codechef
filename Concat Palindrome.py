for _ in range(int(input())):
    n, m = map(int, input().split())
    s = input().strip()
    t = input().strip()
    ca = [0] * 26
    cb = [0] * 26
    for si in s:
        ca[ord(si) - ord('a')] += 1
    for ti in t:
        cb[ord(ti) - ord('a')] += 1
    for i in range(26):
        if ca[i] == cb[i]:
            ca[i] = 0
            cb[i] = 0
        elif ca[i] > cb[i]:
            ca[i] -= cb[i]
            cb[i] = 0
        else:
            cb[i] -= ca[i]
            ca[i] = 0
    if max(ca) == 0 and max(cb) == 0:
        print("YES")
    elif max(ca) > 0 and max(cb) > 0:
        print("NO")
    elif max(ca) > 0 and sum([cai % 2 for cai in ca]) <= 1:
        print("YES")
    elif max(cb) > 0 and sum([cbi % 2 for cbi in cb]) <= 1:
        print("YES")
    else:
        print("NO")
