for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(ai)%2 for ai in input().split()]
    print("YES" if ((k > 0 and a.count(0) >= k) or (k == 0 and a.count(1) > 0)) else "NO")
