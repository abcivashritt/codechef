for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    for i in range(n, 0, -1):
        if a[i-1] != i:
            print(i + 1)
            break
    else:
        print(0)
