for _ in range(int(input())):
    x = float(input())
    x = max(x, 1-x)
    print((10000 + 2 * (1 - x) * 10000) * x)
