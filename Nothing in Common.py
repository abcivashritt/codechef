for _ in range(int(input())):
    n, m = map(int, input().split())
    a = set(int(ai) for ai in input().split())
    b = set(int(bi) for bi in input().split())
    print(n - len(a - b))
