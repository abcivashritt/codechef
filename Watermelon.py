for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    print("YES" if sum(a) >= 0 else "NO")
