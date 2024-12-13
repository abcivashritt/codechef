for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    a = [len(ai) for ai in s.split("0") if len(ai) > 0]
    print(0 if len(a) == 0 else (max(a) if (s[0] == '0' or len(a) == 1) else (a[0] + max(a[1:]))))
