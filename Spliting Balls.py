MOD = 1000000007
d = {}
c_val = 1
d[1] = c_val
for i in range(2, 1000001):
    c_val *= i
    c_val %= MOD
    d[i] = c_val

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    total = 0
    for ai in a:
        total += d[ai]
        total %= MOD
    print(total)
