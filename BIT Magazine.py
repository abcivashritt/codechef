def nCk(n, k):
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
    b = [int(bi) for bi in input().split()]
    k = int(input())

    a = []
    for i in range(1, b[0]+1, 2):
        a.append(b[i] + (0 if i+1 >= b[0] + 1 else b[i+1]))
    del b

    total = (n * (n + 1) // 2 - sum(a))
    pos = nCk((n + 1) // 2,  k)
    total = (total * nCk((n + 1) // 2 - len(a), k)) / pos
    print(f"{total:.6f}")
