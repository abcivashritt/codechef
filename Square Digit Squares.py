import math

sq = [0, 1, 4, 9]
poss = [1, 4, 9]
next_poss = []
alw_pos = [0, 1, 4, 9]

i = 1
while i < 10:
    i += 1
    for pi in poss:
        for j in range(len(alw_pos)):
            num = pi * 10 + alw_pos[j]
            sqr = math.sqrt(num)
            if sqr == int(sqr):
                sq.append(num)
            next_poss.append(num)
    poss = next_poss
    next_poss = []

sq.append(10000000000) #The only 10 digit number to be checked and it is a perfect square

for _ in range(int(input())):
    a, b = map(int, input().split())

    total = 0
    for sqi in sq:
        if a <= sqi <= b:
            total += 1
    print(total)
