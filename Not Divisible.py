a = [1, 2] * 300
for _ in range(int(input())):
    n = int(input())
    print(*a[:n])
