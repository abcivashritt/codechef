for _ in range(int(input())):
    n = int(input())
    total = 0
    n -= 2
    total += min(1, max(0, n)) * 2
    n -= 1
    total += max(0, n)//2 * 3
    total += max(0, n)%2
    print(total)
