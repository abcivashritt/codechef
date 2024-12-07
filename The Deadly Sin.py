def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

for _ in range(int(input())):
    x, y = map(int, input().split())
    print(2 * gcd(x, y))
