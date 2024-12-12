n, m = map(int, input().split())
for _ in range(m):
    q = int(input())
    a = q - n - 1
    print(min(a, 2*n - a) if q >= n + 2 and q <= 3*n else 0)
