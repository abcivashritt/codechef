for _ in range(int(input())):
    r, c = map(int, input().split())
    a = [input().strip() for i in range(r)]
    total = 0
    for i in range(2, r - 2):
        for j in range(2, c - 2):
            if (a[i-1][j] == '^' and
                a[i-2][j] == '^' and
                a[i+1][j] == '^' and
                a[i+2][j] == '^' and
                a[i][j-1] == '^' and
                a[i][j-2] == '^' and
                a[i][j+1] == '^' and
                a[i][j+2] == '^' and
                a[i][j] != '#'):
                    total += 1
    print(total)
