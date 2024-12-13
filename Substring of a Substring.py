for _ in range(int(input())):
    s = input().strip()
    t = "".join(['0' if (s[i] == s[0] or s[i] == s[len(s) - 1]) else '1' for i in range(len(s))])
    u = [len(x) for x in t.split('0')]
    print(-1 if max(u) == 0 else max(u))
