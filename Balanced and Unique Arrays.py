for _ in range(int(input())):
    n = int(input())
    if (n*(n + 1) // 2) % 2:
        print("NO")
    else:
        print("YES")
        a = [i for i in range(1, n+1, 2)]
        b = [i for i in range(2, n+1, 2)]
        print(*a[:n//4], *b[n//4:])
        print(*b[:n//4], *a[n//4:])
