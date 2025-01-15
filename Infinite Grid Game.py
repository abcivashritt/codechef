m = 1000
n = 1000
a = [[True] * (n + 1) for i in range(m + 1)]
rows = []
diff = 1
for i in range(1, m):
    if i + diff > m:
        break
    if i not in rows and i + diff not in rows:
        a[i][i + diff] = False
        a[i + diff][i] = False
        rows.append(i)
        rows.append(i + diff)
        diff += 1
for _ in range(int(input())):
    m, n, p, q = map(int, input().split())
    m -= p
    n -= q
    print("Alice" if a[m][n] else "Bob")
