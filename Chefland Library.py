for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    dd = {}
    for i in range(n-1, -1, -1):
        if a[i] not in dd:
            dd[a[i]] = i + 1
    print(sum(dd.values()))
