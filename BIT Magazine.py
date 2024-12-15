def nCk(n, k):
    if k < 0:
        return 0
    k = min(k, n-k)
    num = 1
    denom = 1
    for i in range(k):
        num *= (n - i)
    for i in range(1, k+1):
        denom *= i

    return num // denom


for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    k = int(input())

    total = (n * (n + 1) // 2 - sum(a[1:]))
    pos = nCk((n + 1) // 2,  k)
    total = (total * (pos - nCk((n + 1) // 2 - 1, k - 1))) / pos
    print(f"{total:.4f}")
