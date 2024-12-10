for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = [int(bi) for bi in input().split()]
    a.sort()
    b.sort(reverse = True)
    print(max([ai + bi for ai, bi in zip(a,b)]))
