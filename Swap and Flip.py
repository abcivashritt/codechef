for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    t = input().strip()
    total = 0
    for si, ti in zip(s, t):
        if si != ti:
            total += 1
    print("NO" if total % 2 else "YES")
