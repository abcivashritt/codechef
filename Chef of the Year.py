n, m = map(int, input().split())
dd1 = {}
dd2 = {}
dd3 = {}
for i in range(n):
    s, t = input().split()
    dd1[s] = t
for i in range(m):
    s = input().strip()
    if s in dd2:
        dd2[s] = dd2[s] + 1
    else:
        dd2[s] = 1
    if dd1[s] in dd3:
        dd3[dd1[s]] = dd3[dd1[s]] + 1
    else:
        dd3[dd1[s]] = 1

count = 0
ans = ""
for key, value in dd3.items():
    if (value > count) or (value == count and key < ans):
        ans = key
        count = value
print(ans)
count = 0
ans = ""
for key, value in dd2.items():
    if (value > count) or (value == count and key < ans):
        ans = key
        count = value
print(ans)
