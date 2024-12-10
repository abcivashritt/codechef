for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    print("YES" if (s.find("LL") != -1 or s.find("RR") != -1) else "NO")
