for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ans = 0
    for ai, bi in zip(a, b):
        if k//ai*bi > ans:
            ans = k//ai*bi
    print(ans)
