for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort(reverse = True)
    print(sum(a[::2]))
