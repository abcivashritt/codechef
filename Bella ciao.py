for _ in range(int(input())):
    D, d, p, q = map(int, input().split())
    n = D // d
    print(p*D + d * q * (n * (n-1) // 2) + n * q * (D % d))
