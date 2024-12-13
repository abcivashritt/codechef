def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort()
    b = [360 - a[n-1] + a[0]]
    for i in range(1, n):
        b.append(a[i] - a[i-1])
    g = b[0]
    for i in range(1, len(b)):
        g = gcd(g, b[i])
    total = 0
    for bi in b:
       total += (bi // g) - 1 
    print(total)
