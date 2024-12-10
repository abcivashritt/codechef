for _ in range(int(input())):
    n = int(input())
    a = [abs(int(ai)) for ai in input().split()]
    b = a[0::2]
    c = a[1::2]
    diff = max(c) - min(b)
    print(sum(b) - sum(c) + (2*diff if diff > 0 else 0))
