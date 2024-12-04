for _ in range(int(input())):
    n, m = map(int, input().split())
    cuts  = n*m - 1
    print("Yes" if cuts%2 else "No")
