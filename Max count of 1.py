for _ in range(int(input())):
    n = int(input())
    s = input()
    c1 = 0
    c2 = 1
    p1 = '0'
    p2 = '1'
    for i in range(0, n-1):
        if p1 != s[i]:
            p1 = '1'
            c1 += 1
        else:
            p1 = '0'
        if p2 != s[i]:
            p2 = '1'
            c2 += 1
        else:
            p2 = '0'
    print(max(c1, c2))
