for _ in range(int(input())):
    n = int(input())
    c1 = [0] * 26
    c2 = [0] * 26
    total = 0
    for c in input():
        c1[ord(c) - ord('a')] += 1
    for c in input():
        c2[ord(c) - ord('a')] += 1
    for c1i, c2i in zip(c1, c2):
        total = max(total, min(c1i, c2i))
    print(total)
