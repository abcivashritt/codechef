for _ in range(int(input())):
    s, t = input().split()
    print("YES" if (set(s) != set(t) or sorted(s) == sorted(t)) else "NO")
