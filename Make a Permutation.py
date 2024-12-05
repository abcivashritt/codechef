for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split() if int(ai) <= n]
    a = set(a)
    print(n - len(a))
