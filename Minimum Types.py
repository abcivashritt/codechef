for _ in range(int(input())):
    n, x = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    a = [int(bi) * ai for bi, ai in zip(input().split(), a)]
    a.sort(reverse = True)
    c = 0
    for ai in a:
        if x > 0:
            c += 1
            x -= ai
    print(c if x <= 0 else -1)
