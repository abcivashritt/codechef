for _ in range(int(input())):
    n, k = map(int, input().split());
    h = [0] + list(map(int, input().split()))
    total = 0
    for i in range(1, n+1):
        total += ((h[i] - h[i-1] + k - 1)//k - 1)
    print(total)
