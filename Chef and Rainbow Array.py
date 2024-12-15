for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    i = 0
    j = n-1
    present = [False] * 7
    for k in range(1, 8):
        while i <= j and a[i] == a[j] and a[i] == k:
            i += 1
            j -= 1
            present[k-1] = True
    print("yes" if (all(present) and i > j) else "no")
