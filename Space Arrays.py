for _ in range(int(input())):
    n = int(input())
    valid = True
    a = [int(ai) for ai in input().split()]
    a.sort()
    for i, ai in enumerate(a):
        if ai > i+1:
            valid = False
    total = ((n * (n + 1) // 2) - sum(a))
    print("First" if (valid and total >= 0 and total % 2) else "Second")
