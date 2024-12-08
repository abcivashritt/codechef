from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    c = Counter(a).values()
    print(n - max(c))
