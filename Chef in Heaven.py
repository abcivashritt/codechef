for _ in range(int(input())):
    l = int(input())
    s = input()
    count = 0
    heaven = False
    for i in range(len(s)):
        if s[i] == '1':
            count += 1
        if count >= i + 1 - count:
            heaven = True
    if heaven:
        print("YES")
    else:
        print("NO")
