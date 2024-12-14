MOD = 1000000007

a = []
a.append(1)
a.append(2)
for i in range(2, 33):
    a.append(a[i-1] ** 2 % MOD)

for _ in range(int(input())):
    n = int(input())
    tot = a[0]
    k = 1
    while n > 0:
        if n % 2:
            tot *= a[k]
            tot %= MOD
        n //= 2
        k += 1
    
    tot = (tot - 1) % MOD
    print(tot)
