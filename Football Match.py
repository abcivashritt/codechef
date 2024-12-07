for _ in range(int(input())):
    n = int(input())
    l = []
    for i in range(n):
        l.append(input().strip())
    l.sort()
    if n == 0:
        print("Draw")
    elif l[0] == l[n-1]:
        print(l[0])
    elif l.count(l[0]) > l.count(l[n-1]):
        print(l[0])
    elif l.count(l[0]) < l.count(l[n-1]):
        print(l[n-1])
    else:
        print("Draw")
