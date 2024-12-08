for _ in range(int(input())):
    n = int(input())
    b = [int(bi) for bi in input().split()]
    a = 1
    b.sort()
    for bi in b:
        print(a, end = " ")
        a = abs(a - bi)
    print(a)
