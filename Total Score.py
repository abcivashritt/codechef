for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    for i in range(n):
        print(sum([a[i] * int(c) for i, c in enumerate(input().strip())]))
