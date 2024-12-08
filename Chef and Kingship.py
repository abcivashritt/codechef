for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort()
    print(a[0] * sum(a[1:]))
