for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    high = max(a)
    total = 0
    for i, ai in enumerate(a):
        if ai == high:
            if i + 1 >= k:
                total += n - i
    print(total)
