def check(win, a, n, k):
    b = 0
    min_so_far = a[0]
    max_so_far = a[0]
    for ai in a:
        min_so_far = min(ai, min_so_far)
        max_so_far = max(ai, max_so_far)
        if (max_so_far - min_so_far) > 2 * win:
            min_so_far = ai
            max_so_far = ai
            b += 1
    if b <= k:
        return True
    return False

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    low = 0
    high = 1000000000
    while low < high:
        mid = (low + high) // 2
        if check(mid, a, n, k):
            high = mid
        else:
            low = mid + 1
    print(low if check(low, a, n, k) else high)
