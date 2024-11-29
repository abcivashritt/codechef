for _ in range(int(input())):
    n = int(input())
    s = input()
    c = [0] * 26
    all_zero = True
    for i in range(0, n, 2):
        c[ord(s[i]) - ord("a")] += 1
    for i in range(1, n, 2):
        c[ord(s[i]) - ord("a")] -= 1
    for i in c:
        if i != 0:
            all_zero = False
    print("YES" if all_zero else "NO")
