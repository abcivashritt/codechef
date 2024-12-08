for _ in range(int(input())):
    n = int(input())
    n_c = n
    c = 0
    while n_c > 0:
        c += 1
        n_c = n_c >> 1
    print(n - c)
