for _ in range(int(input())):
    n = int(input())
    p = q = 0
    for i, bi in enumerate(input().split()):
        if int(bi) == -1:
            q += i + 1
        else:
            p += i + 1
    print(abs(p - q))
