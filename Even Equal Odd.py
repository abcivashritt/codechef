for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    c = [0] * (2 * n)
    for i,ai in enumerate(a):
        count = 0
        while ai & 1 == 0:
            ai = ai >> 1
            count += 1
        c[i] = count
    c.sort()
    print(max(c.count(0) - n, sum(c[:n])))
