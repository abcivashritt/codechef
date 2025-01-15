IN = 0
OUT = 1
def in_out(x1, y1, x2, y2):
    if x2 >= x1 or y2 >= y1:
        return OUT
    else:
        return IN

for _ in range(int(input())):
    x1, y1, x2, y2 = map(int, input().split())
    x3, y3, x4, y4 = map(int, input().split())
    total = abs(x1 - x2) * abs(y1 - y2) + abs(x3 - x4) * abs(y3 - y4)
    if in_out(x2, y2, x3, y3) == OUT or in_out(x4, y4, x1, y1) == OUT:
        print(total)
    else:
        x = [x1, x2, x3, x4]
        y = [y1, y2, y3, y4]
        x.sort()
        y.sort()
        print(total - (x[2] - x[1]) * (y[2] - y[1]))
