for _ in range(int(input())):
    a, b = map(int, input().split())
    k = 1
    while abs(a - b*k) % (k + 1) != 0:
        k += 1
    print(min(abs(a - b*k) // (k + 1), k + 1))
