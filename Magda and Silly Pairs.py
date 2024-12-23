for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = [int(bi) for bi in input().split()]
    a_odds = 0
    b_odds = 0
    total = 0
    for ai in a:
        if ai % 2:
            a_odds += 1
            ai -= 1
        total += ai
    for bi in b:
        if bi % 2:
            b_odds += 1
            bi -= 1
        total += bi
    print((total // 2) + min(a_odds, b_odds))
