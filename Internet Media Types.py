n, q = map(int, input().split())
a = dict()
for i in range(n):
    s, t = input().split()
    a[s] = t
for i in range(q):
    s = input().strip()
    index = s.rfind('.')
    s = s[index+1:] if index != -1 else None
    print(a.get(s, "unknown"))
