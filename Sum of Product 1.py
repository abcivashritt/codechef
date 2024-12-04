for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    i = 0
    total = 0
    c = 0
    while i < n:
        while i < n and a[i] == 0:
            i += 1
        while i < n and a[i] == 1:
            i += 1
            c += 1
        total += (c * (c+1) // 2)
        c = 0
    print(total)
