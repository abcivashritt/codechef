MOD = 1000000007

def extended_euclid(a, b):
    if b == 0:
        return (a, 1, 0)
    else:
        g, x1, y1 = extended_euclid(b, a % b)
        x = y1
        y = x1 - (y1 * (a // b))
        return (g, x, y)

for _ in range(int(input())):
    n, d = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    tot_poss = d * d
    poss = d * (d + 1) // 2
    tot_poss %= MOD
    g, x, y = extended_euclid(tot_poss, MOD)
    x = (x % MOD + MOD) % MOD
    print(poss * x % MOD)
