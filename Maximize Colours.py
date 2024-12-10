for _ in range(int(input())):
    a = [int(ai) for ai in input().split()]
    a.sort(reverse = True)
    total = 0
    for i in range(3):
        if a[i] > 0:
            total += 1
            a[i] -= 1
    for (i, j) in [(0, 1), (0, 2), (1, 2)]:
        if a[i] > 0 and a[j] > 0:
            total += 1
            a[i] -= 1
            a[j] -= 1
    print(total)
