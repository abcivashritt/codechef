for _ in range(int(input())):
    s = input().strip()
    a = [False] * 26
    for i in range(len(s)):
        c = s[i]
        if 'A' <= s[i] <= 'Z':
            c = chr(ord(s[i]) - ord('A') + ord('a'))
        if 'a' <= c <= 'z':
            a[ord(c) - ord('a')] = True
    for i in range(26):
        if not a[i]:
            print(chr(i + ord('a')))
            break
    else:
        print("~")
