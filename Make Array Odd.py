for _ in range(int(input())):
    n, x = map(int, input().split())
    x %= 2
    a = [int(ai) % 2 for ai in input().split()]
    ones = a.count(1)
    zeros = a.count(0)
    print((zeros+1) // 2 if x == 1 else (zeros if ones > 0 else -1))
