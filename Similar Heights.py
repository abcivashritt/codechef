from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    a.sort()
    b = Counter(a)
    c = list(b.values())
    total = (c.count(1) + 1) // 2
    if c.count(1) == 1:
        one_key = -1
        left_val = -1
        right_key = -1
        for key in b:
            if one_key == -1:
                if b[key] == 1:
                    one_key = key
                else:
                    left_val = max(left_val, b[key])
            else:
                right_key = key
        if right_key == -1 and left_val == 2:
            total += 1
    print(total)
