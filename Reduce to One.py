MOD = 1000000007
ll = [1] * 1000001
for i in range(2, 1000001):
    ll[i] = (ll[i-1] * (i + 1) + i) % MOD
for _ in range(int(input())):
    n = int(input())
    print(ll[n])
