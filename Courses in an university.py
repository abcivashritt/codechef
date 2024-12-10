for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    print(n - max(a))

