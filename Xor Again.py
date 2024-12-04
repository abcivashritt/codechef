for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    xor = 0
    for ai in a:
        xor = xor ^ 2*ai
    print(xor)
