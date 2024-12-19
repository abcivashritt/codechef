for _ in range(int(input())):
    n = int(input())
    a = sum([int(ai) % 2 for ai in input().split()])
    print(a // 2)
