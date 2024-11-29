for _ in range(int(input())):
    a = list(map(int, input().split()))
    c1 = a.count(a[0])
    if c1 == 1:
        c2 = a.count(a[1])
        if c2 <= 2:
            print(2)
        else:
            print(1)
    elif c1 == 2:
        print(2)
    elif c1 == 3:
        print(1)
    else:
        print(0)
