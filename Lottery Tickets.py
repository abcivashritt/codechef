for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    chef = a[0]
    a.sort()
    ind = a.index(chef)
    total = 0
    if ind == 0:
        total += chef - 1
    else:
        total += (a[ind] - a[ind - 1]) // 2

    total += 1 #For chef itself

    if ind == len(a) - 1:
        total += (1000000 - chef)
    else:
        total += (a[ind + 1] - a[ind]) // 2
    print(total)
