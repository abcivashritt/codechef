n = int(input())
a = [input().strip() for i in range(n)]
a.reverse()
b = set()
c = []
for i in range(n):
    if a[i] not in b:
        c.append(a[i][-2:])
        b.add(a[i])
print("".join(c))
