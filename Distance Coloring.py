MOD = 1000000007

def fact(n, k):
    total = 1
    for i in range(min(n, k)):
        total = total * k
        k -= 1
        total %= MOD
    return total

for _ in range(int(input())):
    n, k = map(int, input().split())
    print(fact(n, k))
