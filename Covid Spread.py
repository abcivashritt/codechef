import math

for _ in range(int(input())):
    n, d = map(int, input().split())
    if d <= 20:
        total = min(n, math.pow(2, min(d, 10)))
        d -= 10
        if d > 0 and n-total > 0:
            total = min(n, total*math.pow(3, d))
        print(int(total))
    else:
        print(n)
