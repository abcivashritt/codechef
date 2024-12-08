for _ in range(int(input())):
    l, r = map(int, input().split())
    n = (r - l + 1 + (1 if l%2 else 0)) // 2
    print("Even" if n%2 == 0 else "Odd")
