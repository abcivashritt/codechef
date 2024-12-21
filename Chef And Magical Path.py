for _ in range(int(input())):
    n, m = map(int, input().split())
    print("No" if ((n % 2 and m % 2) or (min(n, m) == 1 and max(n, m) != 2)) else "Yes")
