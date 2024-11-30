for _ in range(int(input())):
    n, k = map(int, input().split())
    s = list(input().split())
    t = set()
    for i in range(k):
        t |= set(input().split())
    for si in s:
        print("YES" if si in t else "NO", end = " ")
    print()
