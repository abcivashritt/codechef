for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = [a[0]]
    i = 1
    while i < n and a[i] < a[0]:
        b.append(a[i])
        i += 1
    if i < n:
        print(len(b))
        print(*b)
        print(n - i)
        print(*a[i:])
    else:
        print(-1)
