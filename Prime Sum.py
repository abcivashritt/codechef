def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

for _ in range(int(input())):
    a, b = map(int, input().split())
    print(-1 if (a == 1 or b == 1) else (1 if gcd(a, b) == 1 else 0))
