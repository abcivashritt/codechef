for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    print("YES" if (a == b or (c != d and  abs(a - b) % abs(c - d) == 0)) else "NO")
