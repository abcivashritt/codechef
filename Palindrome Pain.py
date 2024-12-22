for _ in range(int(input())):
    x, y = map(int, input().split())
    if x % 2 and y % 2:
        print(-1)
    else:
        if x % 2:
            s = "b" * (y // 2) + "a" * x + "b" * (y // 2)
            t = "a" * (x // 2) + "b" * (y // 2) + "a" + "b" * (y // 2) + "a" * (x // 2)
        elif y % 2:
            s = "a" * (x // 2) + "b" * y + "a" * (x // 2)
            t = "b" * (y // 2) + "a" * (x // 2) + "b" + "a" * (x // 2) + "b" * (y // 2)
        else:
            s = "a" * (x // 2) + "b" * y + "a" * (x // 2)
            t = "b" * (y // 2) + "a" * x + "b" * (y // 2)
        print(f"{s}\n{t}" if s != t else "-1")
