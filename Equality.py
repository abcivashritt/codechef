for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    total = sum(a) // (n-1)
    print(*[total - ai for ai in a])
