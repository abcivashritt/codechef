for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    odds = sum([ai % 2 for ai in a])
    evens = n - odds
    if odds == 0 or evens == 0:
        print(-1)
    else:
        b = [ai for ai in a if ai % 2 == 0]
        b = b + [ai for ai in a if ai % 2]
        print(*b)
