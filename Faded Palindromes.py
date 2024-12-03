for _ in range(int(input())):
    s = input()
    i = 0
    j = len(s) - 1
    l = [c for c in s]
    possible = True
    while i < j:
        if l[i] == '.' and l[j] == '.':
            l[i] = 'a'
            l[j] = 'a'
        elif l[i] == '.':
            l[i] = l[j]
        elif l[j] == '.':
            l[j] = l[i]
        elif l[i] != l[j]:
            possible = False
        i += 1
        j -= 1
    if i == j and l[i] == '.':
        l[i] = 'a'
    if not possible:
        l = [-1]
    print(*l, sep = "")
