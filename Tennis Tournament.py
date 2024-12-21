for _ in range(int(input())):
    n = int(input())
    if n % 2:
        print("YES")
        a = []
        for i in range(n):
            b = [0] * (i + 1)  + [1] * min(n - i - 1, (n // 2)) + [0] * (n -  (min(n - i - 1, (n // 2)) + i + 1))
            a.append(b)
        for i in range(n):
            for j in range(0, i, 1):
                a[i][j] = (1 if a[j][i] == 0 else 0)
        for i in range(n):
            print(*a[i], sep = "")
    else:
        print("NO")
