import math

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    total = sum(a) * 2
    root = int(math.sqrt(total)) - 1
    while root * (root + 1) <= total:
        root += 1
    print(root - 1)
