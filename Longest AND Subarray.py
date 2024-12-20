for _ in range(int(input())):
    n = int(input())
    x = 1
    while x <= n:
        x *= 2
    x //= 2
    longest = n - x + 1
    while x > 0:
        longest = max(longest, x - (x >> 1))
        x >>= 1
    print(longest)
