for _ in range(int(input())):
    n = int(input())
    a = [-1 if int(ai) < 0 else 1 for ai in input().split()]
    b = []
    i = 0
    while i < n:
        c = 1
        prev = a[i]
        total = a[i]
        i += 1
        while i < n and (total+a[i] == 0 or prev == total+a[i]):
            total += a[i]
            c += 1
            i += 1
        b.append(c)
    for bi in b:
        while bi > 0:
            print(bi, end = " ")
            bi -= 1
    print()
