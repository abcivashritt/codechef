for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = [0] * n
    high = 0
    for i, ai in enumerate(a):
        if ai > high:
            b[i] = 1
            high = ai
        else:
            b[i] = 0
    print(*b)
