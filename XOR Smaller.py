from math import pow

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = [0] * 32
    for ai in a:
        k = 0
        while ai > 0:
            if ai & 1:
                b[k] += 1
            ai >>= 1
            k += 1
    c = sum([int(pow(2, i)) for i in range(len(b)) if b[i] == n])
    print(c)
