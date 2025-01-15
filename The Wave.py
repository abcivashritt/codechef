def bin_search(qi, a):
    left = 0
    right = len(a) - 1
    mid = (left + right) // 2
    while left < right:
        mid = (left + right) // 2
        if qi == a[mid]:
            return mid
        elif qi < a[mid]:
            right = mid
        else:
            left = mid + 1
    return left

n, q = map(int, input().split())
a = [int(ai) for ai in input().split()]
a.sort()
for i in range(q):
    qi = int(input())
    mid = bin_search(qi, a)
    if a[mid] == qi:
        print("0")
    elif a[mid] > qi:
        print("NEGATIVE" if (n - mid) % 2 else "POSITIVE")
    else:
        print("POSITIVE")
