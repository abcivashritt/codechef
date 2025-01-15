for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    t = input().strip()
    total = 0
    for i in range(n):
        if s[i] == t[i] and s[i] == '1':
            total += 1
    if total % 2 == 0:
        for i in range(n):
            if s[i] != t[i]:
                total += 1
                break
    print("YES" if total % 2 else "NO")
