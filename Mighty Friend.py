for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    motu = a[0::2]
    tomu = a[1::2]
    motu.sort(reverse = True)
    tomu.sort()
    i = j = 0
    while i < (n+1)//2 and j < n//2 and k > 0 and motu[i] > tomu[j]:
        motu[i], tomu[j] = tomu[j], motu[i]
        i += 1
        j += 1
        k -= 1

    print("YES" if sum(tomu) > sum(motu) else "NO")
