for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    f = s = 0
    s = sum(a)
    low = max(f, s)
    for ai in a:
        f += ai
        s -= ai
        low = min(low, max(f, s))
    print(low)
