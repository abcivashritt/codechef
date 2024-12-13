for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    if len(set(a)) > 1:
        left = a[0]
        right = sum(a[1:])
        for i in range(1, n-2):
            left += a[i]
            right -= a[i]
            if left != right:
                print("YES")
                break
        else:
            print("NO")
    else:
        print("NO")

