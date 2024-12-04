yes = True
end = False
r = 0
w = 0
for _ in range(int(input())):
    ri, wi = map(int, input().split())
    if ri < r or wi < w or wi > 10 or end:
        yes = False
    r = ri
    w = wi
    if wi >= 10:
        end = True
print("YES" if yes else "NO")
