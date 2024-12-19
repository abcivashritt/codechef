for _ in range(int(input())):
    n = int(input())
    s, t = input().split()
    a = [0] + [i+1 for i, c in enumerate(s) if c == t]
    total = 0
    for i in range(1, len(a)):
        total += (a[i] - a[i-1]) * (n - a[i] + 1)
    print(total)
