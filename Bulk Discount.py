for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort()
    k = 1
    for i in range(1, n):
        a[i] = max(0, a[i] - k)
        k += 1
    print(sum(a))
