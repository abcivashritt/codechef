for _ in range(int(input())):
    n, m, x, y = map(int, input().split())
    print("Chefirnemo" if (((n-1) % x == 0 and (m-1) % y == 0) or (n > 1 and m > 1 and (n-2) % x == 0 and (m-2) % y == 0)) else "Pofik")
