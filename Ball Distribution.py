for _ in range(int(input())):
    n, m = map(int, input().split())
    a = sum([int(ai) for ai in input().split()])
    m -= a // n
    print(n if m == 0 else (a % n if m == 1 else 0))
