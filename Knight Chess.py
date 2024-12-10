for _ in range(int(input())):
    n = int(input())
    a = [list(map(int, input().split())) for i in range(n)]
    c = 0
    ki, kj = map(int, input().split())
    for (i, j) in [(0, 0), (0, 1), (0, -1), (1, 0), (-1, 0), (1, 1), (-1, -1), (1, -1), (-1, 1)]:
        for k in range(n):
            if (abs(a[k][0] - (ki + i)), abs(a[k][1] - (kj + j))) in [(2, 1), (1, 2) ]:
                c += 1
                break
                
    print("YES" if c == 9 else "NO")
