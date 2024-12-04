for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    first = 0
    last = min(n, m)
    fair = True
    while first < last:
        b = set(a[first:last])
        if len(b) != last - first:
            fair = False
        first = last
        last = min(last + n, m)
    print("YES" if fair else "NO")
