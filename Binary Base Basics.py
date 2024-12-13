for _ in range(int(input())):
    n, k = map(int ,input().split())
    s = input().strip()
    i = 0
    while i < n-i-1:
        if s[i] != s[n-i-1]:
            k -= 1
        i += 1
    if k > 0:
        if i == n-i-1:
            k = 0
        else:
            k = k % 2
    print("YES" if k == 0 else "NO")
