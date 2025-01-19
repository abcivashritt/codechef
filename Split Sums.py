def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

for _ in range(int(input())):
    n, m = map(int, input().split())
    n = n * (n + 1) // 2
    if m > n or m % 2 != n % 2:
        print("No")
    else:
        x = (n - m) // 2
        y = n - x
        print("Yes" if gcd(x, y) == 1 else "No")
