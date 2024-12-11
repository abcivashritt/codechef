for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    c = a.count(min(a))
    print(n if min(a) != 0 else max(c, n-c))
