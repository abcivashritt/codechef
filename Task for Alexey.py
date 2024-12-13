import sys

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    smallest = sys.maxsize
    for i in range(n):
        for j in range(i+1, n):
            smallest = min(smallest, a[i] * a[j] // gcd(a[i], a[j]))
    print(smallest)
