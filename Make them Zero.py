for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(1, n):
        a[0] |= a[i]
    count = 0
    while a[0] > 0:
        if a[0] & 1:
            count += 1
        a[0] = a[0] >> 1
    print(count)
