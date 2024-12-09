for _ in range(int(input())):
    r, g, b = map(int, input().split())
    k = int(input())
    k -= 1
    print(min(r, k) + min(g, k) + min(b, k) + 1)
