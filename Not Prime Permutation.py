for _ in range(int(input())):
    n = int(input())
    if n > 2:
        a = [(n + 1 - int(ai)) if n%2 else ((int(ai) + 2) % n) for ai in input().split()]
        if 0 in a:
            a[a.index(0)] = n
        print(*a)
    else:
        input()
        print(-1)
