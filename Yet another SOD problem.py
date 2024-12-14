for _ in range(int(input())):
    l, r = map(int, input().split())
    while l % 3:
        l += 1
    print(0 if l > r else (r - l) // 3 + 1)
