for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    right = 0 if s[0] == '1' else 1
    left = 0 if (s[-1] == '1' or n < 2) else 1
    print(right + left)
