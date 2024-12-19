for _ in range(int(input())):
    n = int(input())
    i = 1
    j = n - n % 2
    while i < j:
        print(i, j, end = " ")
        i += 1
        j -= 1
    if n % 2:
        print(n)
    else:
        print()
