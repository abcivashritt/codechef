for _ in range(int(input())):
    a, b, n = map(int, input().split())
    if n%2 == 0:
        a = abs(a)
        b = abs(b)
    print(1 if a > b else (2 if a < b else 0))
