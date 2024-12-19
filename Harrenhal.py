for _ in range(int(input())):
    s = input().strip()
    pal = True
    i = 0
    n = len(s) - 1
    while i < n:
        if s[i] != s[n]:
            pal = False
            break
        i += 1
        n -= 1
    print(1 if pal else 2)
