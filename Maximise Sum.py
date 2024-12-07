import sys

for _ in range(int(input())):
    n = int(input())
    c = 0
    total = 0
    smallest = sys.maxsize
    for ai in input().split():
        ai = int(ai)
        if ai < 0:
            c += 1
        ai = abs(ai)
        smallest = min(ai, smallest)
        total += ai
    print(total - (2*smallest if c%2 else 0))
