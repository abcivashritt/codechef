for _ in range(int(input())):
    a = [int(ai) for ai in input().split()]
    a.pop(a.index(len(a) - 1))
    print(max(a))
