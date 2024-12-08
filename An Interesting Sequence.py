for _ in range(int(input())):
    k = int(input())
    c = 0
    while k > 1 and k % 2 == 0:
        c += 1
        k >>= 1
    print(c)
