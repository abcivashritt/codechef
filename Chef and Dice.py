for _ in range(int(input())):
    n = int(input())
    total = n // 4 * 44
    if n % 4 == 0:
        total += (16 if n // 4 > 0 else 0)
    elif n % 4 == 3:
        total += (18 * 2) + 15 + (4 if n // 4 > 0 else 0)
    elif n % 4 == 2:
        total += (18 * 2) + (8 if n // 4 > 0 else 0)
    elif n % 4 == 1:
        total += 20 + (12 if n // 4 > 0 else 0)
    print(total)
