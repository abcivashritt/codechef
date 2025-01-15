for _ in range(int(input())):
    x, y = map(int, input().split())
    z = x ^ y
    if x % 2 == 0:
        print(2, min(y ^ 2, x ^ y ^ 2), max(y ^ 2, x ^ y ^ 2))
    elif y % 2 == 0:
        print(2, min(x ^ 2, x ^ y ^ 2), max(x ^ 2, x ^ y ^ 2))
    else:
        print(2, min(x ^ 2, y ^ 2), max(x ^ 2, y ^ 2))
