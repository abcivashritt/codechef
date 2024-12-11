for _ in range(int(input())):
    a = int(input())
    d1 = 1
    d2 = 1
    profit = 0
    spend = 1

    exp = a*d1 - spend
    while exp > 0:
        d1 += 1
        if profit < exp:
            profit = exp
            d2 = d1
        spend <<= 1
        spend += 1
        exp = a*d1 - spend
    print(d1 - 1, d2 - 1)
