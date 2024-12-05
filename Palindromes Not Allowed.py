for _ in range(int(input())):
    n = int(input())
    s = "abcd"
    print(s[0:min(n, 4)] + s * ((n - 4) // 4) + s[0:min((max(0, n-4))%4, 4)])
