for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    t = ""
    i = 0
    j = n-1
    while i < j:
        if s[i] == '0':
            t = s[i] + t
        else:
            t += s[i]
        if s[j] == '1':
            t = s[j] + t
        else:
            t += s[j]
        i += 1
        j -= 1
    if i == j:
        if s[i] == '0':
            t = s[i] + t
        else:
            t += s[i]
    print(t)
