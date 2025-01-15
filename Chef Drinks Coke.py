for _ in range(int(input())):
    n, m, k, l, r = map(int, input().split())
    price = 10000000
    for i in range(n):
        ci, pi = map(int, input().split())
        if k <= ci:
            ci = max(k, ci - m)
        else:
            ci = min(k, ci + m)
        if ci >= l and ci <= r:
            price = min(price, pi)
    
    print(-1 if price == 10000000 else price)
