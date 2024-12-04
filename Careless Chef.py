for _ in range(int(input())):
    n = int(input())
    b = list(map(int, input().split()))
    a = [bi%2 for bi in b]
    ones = a.count(1)
    zeros = a.count(0)
    print("YES" if (ones%2 == 0 and zeros%2 == 0) else "NO")
