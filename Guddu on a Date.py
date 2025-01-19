for _ in range(int(input())):
    n = int(input())
    total = 0
    n_c = n
    while n > 0:
        total += (n % 10)
        n //= 10
    n = n_c
    total %= 10
    if total == 0:
        total = 10
    print(n * 10 + (10 - total))
