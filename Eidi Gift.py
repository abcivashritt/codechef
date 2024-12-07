for _ in range(int(input())):
    a = [int(ai) for ai in input().split()]
    b = a[3:]
    a = a[:3]
    for (i, j) in [(0,1), (0,2), (1,2)]:
        if not ((a[i] < a[j] and b[i] < b[j]) or (a[i] > a[j] and b[i] > b[j]) or (a[i] == a[j] and b[i] == b[j])):
            print("NOT FAIR")
            break
    else:
        print("FAIR")
