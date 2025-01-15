for _ in range(int(input())):
    n = int(input())
    a = [int(ai)-1 for ai in input().split()]
    num = 4000000
    b = [0] * n
    b[n-1] = num
    for i in range(n-2, -1, -1):
        if a[i] == i:
            num -= 1
            b[i] = num
        else:
            b[i] = b[a[i]]
    print(*b)
