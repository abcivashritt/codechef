for _ in range(int(input())):
    n = int(input())
    print(1, end = " ")
    k = 0
    while k < n:
        print(1 << k, end = " ")
        k += 1
    print()
