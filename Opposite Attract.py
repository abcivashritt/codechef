for _ in range(int(input())):
    n = int(input())
    s = list(input().strip())
    for i in range(n):
        s[i] = ('0' if s[i] == '1' else '1')
    print("".join(s))
