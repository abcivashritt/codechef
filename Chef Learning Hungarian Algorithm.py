for _ in range(int(input())):
    n = int(input())
    row = [False] * n
    col = [False] * n
    for i in range(n):
        for j,ai in enumerate(input().split()):
            val = False if int(ai) > 0 else True
            row[i] |= val
            col[j] |= val
    print("YES" if all(row) and all(col) else "NO")

