for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    one = a.count(1)
    two = one + a.count(2)
    ans = 0
    if one > 0:
        ans = (n - two) * one
    ans += (two * (two-1) // 2)
    print(ans)
