def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

for _ in range(int(input())):
    x, y, k = map(int, input().split())
    g = gcd(x, y)
    print(min(x, y) + g if k == 1 else 2 * g)
