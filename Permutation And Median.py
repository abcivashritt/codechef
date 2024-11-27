for _ in range(int(input())):
    n = int(input())
    i = 1
    while i < n:
        print(n, i, end = " ")
        n -= 1
        i += 1
    if (i == n):
        print(i, end = "")
    print()
