import sys

for _ in range(int(input())):
    N, a, b, c = map(int, input().split())
    l = list(map(int, input().split()))
    ans = sys.maxsize
    for i in l:
        ans = min(ans, abs(b - i) + abs(i - a) + c)
    print(ans)
