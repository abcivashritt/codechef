for _ in range(int(input())):
    n = int(input())
    i = 1
    while i < n:
        print(n, i, end = " ")
        i += 1
        n -= 1
    if i == n:
        print(i)
    else:
        print()
