for _ in range(int(input())):
    n = int(input())
    c = [0]*26
    for i in range(n):
        for si in set(input()):
            c[ord(si) - ord('a')] += 1
    print(c.count(n))
