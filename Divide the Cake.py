import math

sq = int(math.sqrt(360)) - 1
while sq * (sq + 1) <= 2*360:
    sq += 1
sq -= 1

for _ in range(int(input())):
    n = int(input())
    print("y" if 360 % n == 0 else "n", end = " ")
    print("y" if n <= 360 else "n", end = " ")
    print("y" if n <= sq else "n")
