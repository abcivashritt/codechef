for _ in range(int(input())):
    x, y = map(lambda c: abs(int(c)), input().split())
    lowest = min(x, y)
    total = lowest * 2
    x -= lowest
    y -= lowest

    if x > 0:
        total += (x // 2) * 4 + (3 if x % 2 else 0)
    if y > 0:
        total += (y // 2) * 4 + y % 2
    print(total)
