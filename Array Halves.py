for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    left = 0
    total = 0
    for i in range(2*n):
        if a[i] <= n:
            total += i - left
            left += 1
    print(total)
