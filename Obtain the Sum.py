for _ in range(int(input())):
    n, s = map(int, input().split())
    index = (n * (n+1) - 2 * s) / 2
    print(int(index) if index == int(index) and index > 0 and index <= n else -1)
