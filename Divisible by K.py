def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    for ai in sorted(a):
        g = gcd(ai, k)
        k /= g
    print("YES" if k == 1 else "NO")
