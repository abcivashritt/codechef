for _ in range(int(input())):
    n = int(input())
    print(sum([int(ai) - 1 for ai in input().split()]) + 1)
