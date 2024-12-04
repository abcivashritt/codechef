for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a = sorted(a)
    i = 0
    while i < n and a[i] < 0:
        i += 1
    index = 0
    if i > 0 and i < n:
        index = min(abs(a[i-1] + 1), a[i] - 1)
    elif i > 0:
        index = abs(a[i-1] + 1)
    elif i < n:
        index = a[i] - 1
    print(index if index >= 0 else -1)
