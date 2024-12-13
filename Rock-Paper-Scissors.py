for _ in range(int(input())):
    n = int(input())
    k = n // 2 + 1
    s = [i for i in input().strip()]
    t = ["P"] * n
    i = 0
    while k > 0 and i < n:
        if s[i] == 'R':
            k -= 1
        i += 1
    i = n-1
    while k > 0 and i >= 0:
        if s[i] == 'P':
            t[i] = 'S'
            k -= 1
        elif s[i] == 'S':
            t[i] = 'R'
            k -= 1
        i -= 1
    print("".join(t))
