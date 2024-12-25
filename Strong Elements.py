def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

for _ in range(int(input())):
    n = int(input())
    c = 0
    a = [int(ai) for ai in input().split()]
    prefix = [a[0]] * n
    suffix = [a[n-1]] * n
    for i in range(1, n):
        prefix[i] = gcd(a[i], prefix[i - 1])
    for i in range(n-2, -1, -1):
        suffix[i] = gcd(a[i], suffix[i + 1])
    for i in range(n):
        if i == 0:
            if suffix[i + 1] > 1:
                c += 1
        elif i == n-1:
            if prefix[i - 1] > 1:
                c += 1
        elif gcd(prefix[i - 1], suffix[i + 1]) > 1:
            c += 1
    print(c)
