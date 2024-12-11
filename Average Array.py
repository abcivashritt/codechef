for _ in range(int(input())):
    n, x = map(int ,input().split())
    for i in range(x - n//2, x):
        print(i, end = " ")
    if n%2:
        print(x, end = " ")
    for i in range(x + 1, x + n//2 + 1):
        print(i, end = " ")
    print()
