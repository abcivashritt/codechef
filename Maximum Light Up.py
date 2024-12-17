for _ in range(int(input())):
    p, a, b, c, x, y = map(int, input().split())
    print(p // min(b + x * a, c + y * a))
