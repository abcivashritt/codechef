for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    left = 0
    right = 0
    largest = 0
    min_so_far = a[0]
    for i in range(1, n):
        min_so_far = min(min_so_far, a[i])
        largest = max(largest, a[i] - min_so_far)
    if largest > 0:
        print(largest)
    else:
        print("UNFIT")
