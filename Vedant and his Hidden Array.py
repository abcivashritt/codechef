for _ in range(int(input())):
    n, a = map(int, input().split())
    a %= 2
    if a == 1:
        print("Odd" if n % 2 else "Even")
    else:
        print("Even" if n == 1 else "Impossible")
