for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    i = 0
    c = 0
    while i < n:
        prev = s[i]
        i += 1
        c += 1
        while i < n and s[i] == prev:
            i += 1
    print(c//2)
