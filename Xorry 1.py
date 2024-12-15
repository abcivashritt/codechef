for _ in range(int(input())):
    x = int(input())
    c = 0
    x_copy = x
    while x > 0:
        c += 1
        x >>= 1
    c -= 1
    print(x_copy ^ (1 << c), 1 << c)
