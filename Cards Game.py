n, k = map(int, input().split())
a = [1 if int(ai) < 0 else 0 for ai in input().split()]
i = 0
l = []
while i < n:
    while i < n and a[i] == 0:
        i += 1
    if i < n:
        l.append(i + 1)
    i += 1
    while i < n and a[i] == 0:
        l.append(i + 1)
        i += 1
    i += 1
print(len(l))
if len(l):
    print(*l)
