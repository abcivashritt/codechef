for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    ones = a.count(1)
    zeros = a.count(0)
    print(min(ones, zeros) + (ones - min(ones, zeros)) // 3)
