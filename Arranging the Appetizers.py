import math

for _ in range(int(input())):
    ks, s = input().split()
    k = int(ks)

    d = {}
    ss = set()
    for i, c in zip(range(int(math.pow(2, k))), s):
        b = bin(i)[2:]
        b = "0" * (k - len(b)) + b
        d[b] = c

    for i in range(int(math.pow(2, k))):
        b = bin(i)[2:]
        b = "0" * (k - len(b)) + b
        if b not in ss:
            br = b[::-1]
            d[b], d[br] = d[br], d[b]
            ss.add(br)

    print("".join(d.values()))
