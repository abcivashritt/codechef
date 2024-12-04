for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    total = 0
    for ai in a:
        if ai//k >= 1:
            total += min(ai%k, k - ai%k)
        else:
            total += (k - ai%k)
    print(total)
