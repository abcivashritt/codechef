for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    smallest = min(a)
    print("YES" if (a[n-1] == smallest and a[0] == smallest) else "NO")
