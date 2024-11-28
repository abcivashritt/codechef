for _ in range(int(input())):
    s = input()
    odd = True
    even = True
    for i in range(2, len(s), 2):
        if s[i] != s[i-2]:
            even = False
        if i+1 < len(s) and s[i+1] != s[i-1]:
            odd = False
    print("YES" if s[0] != s[1] and odd and even else "NO")
