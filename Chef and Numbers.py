from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    b = [a[0]]
    skipped = False
    for i in range(1, n):
        if a[i] != a[i-1]:
            b.append(a[i])
            skipped = False
        elif skipped:
            b.append(a[i])
            skipped = False
        else:
            skipped = True

    c = Counter(b)
    highest = 0
    index = 0
    for key, val in c.items():
        if val > highest:
            index = key
            highest = val
        elif val == highest and index > key:
            index = key
    print(index)
