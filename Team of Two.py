for _ in range(int(input())):
    n = int(input())
    a = []
    yes = False
    for i in range(n):
        k, *temp = map(int, input().split())
        num = 0
        for ti in temp:
            num = num | (1 << (ti - 1))
        a.append(num)
    for i in range(n):
        for j in range(i + 1, n):
            if a[i] | a[j] == 31:
                yes = True
    print("YES" if yes else "NO")
