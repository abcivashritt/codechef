for _ in range(int(input())):
    n, m, k = map(int, input().split())
    ss = set()
    ans = set()
    for ai in input().split():
        ai = int(ai)
        if ai <= n:
            if ai in ss:
                ans.add(ai)
            else:
                ss.add(ai)
    if not ans:
        ans.add(0)
    else:
        print(len(ans), end = " ")
    print(*sorted(ans))
