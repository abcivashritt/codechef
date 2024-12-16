def check(a, b):
    for i in range(30, -1, -1):
        c = 1 << i
        if a & c and not (b & c):
            return i
    return 0

for _ in range(int(input())):
    a, b, c = map(int, input().split())
    x = 0
    if a < b < c:
        print(0)
    else:
        if a > b:
            x = (1 << check(a, b))
        if b > c:
            x |= (1 << check(b, c))
        if a ^ x < b ^ x < c ^ x:
            print(x)
        else:
            print(-1)
