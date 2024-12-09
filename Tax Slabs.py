for _ in range(int(input())):
    n = int(input())
    n_copy = n
    total = 0
    a = [1500000, 1250000, 1000000, 750000, 500000, 250000]
    s = [0.30, 0.25, 0.20, 0.15, 0.10, 0.05, 0]
    for (ai, si) in zip(a, s):
        total += max(0, n - ai)*si
        n = min(n, ai)
    print(int(n_copy - total))
