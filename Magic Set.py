import math

for _ in range(int(input())):
    n, m = map(int, input().split())
    c = 0 
    for ai in input().split():
        if int(ai) % m == 0:
            c += 1
    print(0 if c == 0 else int(math.pow(2, c))-1)
