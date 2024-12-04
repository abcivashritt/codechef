for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    if 1 in a:
        c = [ai - bi for (ai, bi) in zip(a, b)]
    else:
        c = b
    c[0] = abs(c[0])
    c[n-1] = abs(c[n-1])
    print("NO" if 1 in c else "YES")
