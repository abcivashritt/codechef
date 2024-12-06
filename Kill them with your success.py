for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort(reverse = True)
    average = a[0]
    for i in range(1, n):
        average = (average + a[i])/2
    print(average)
