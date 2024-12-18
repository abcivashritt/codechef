MOD = 1000000007
a = [1, 2]
for i in range(33):
    a.append(a[len(a) - 1] * a[len(a) - 1])
    a[len(a) - 1] %= MOD

for _ in range(int(input())):
    n, x = map(int, input().split())
    n -= 1
    total = 1
    k = 1
    while n > 0:
        if n & 1:
            total *= a[k]
            total %= MOD
        k += 1
        n >>= 1
    total *= x
    total %= MOD
    print(total)
