for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    a.sort(reverse = True)
    total = 2*a[0]
    first = a[0]
    second = a[1]
    i = 2
    while i < n and second == first:
        second = a[i]
        i += 1
    total = max(total, first + second + max((first - second) % m, (second - first) % m))
    print(total)
