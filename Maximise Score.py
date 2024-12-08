for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    diff = [0] + [abs(a[i-1] - a[i]) for i in range(1, n)] + [0]
    min_max_diff = 1000000
    for i in range(1, n+1):
        min_max_diff = min(min_max_diff, max(diff[i], diff[i-1]))
    print(min_max_diff)
