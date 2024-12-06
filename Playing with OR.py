for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai)%2 for ai in input().split()]
    a = [i for i,ai in enumerate(a) if ai == 1]
    total = 0
    if len(a) > 0:
        i = 0
        while i < len(a):
            first = max(0, a[i] - k + 1)
            last = min(n-1, a[i] + k - 1)
            i += 1
            while i < len(a) and a[i] <= last:
                last = min(n-1, a[i] + k - 1)
                i += 1
            total += last - first - k + 2
        print(total)
    else:
        print(0)
