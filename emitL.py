for _ in range(int(input())):
    s = input().strip()
    print("YES" if (s.count('L') >= 2 and
          s.count('T') >= 2 and
          s.count('I') >= 2 and 
          s.count('M') >= 2 and
          s.count('E') >= (1 if len(s) == 9 else 2)) else "NO")
