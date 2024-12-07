for _ in range(int(input())):
    n = int(input())
    s = input()
    left = s.find(':')
    right = 0
    c = 0
    while left < n and left >= 0:
        right = s[left+1:].find(':')
        if right != -1:
            right += left + 1
            if s[left:right].find('(') == -1 and right - left > 1:
                c += 1
            left = right
        else:
            break
    print(c)
