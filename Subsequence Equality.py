from collections import Counter

for _ in range(int(input())):
    s = input()
    a = Counter(s)
    for ai in a.values():
        if ai > 1:
            print("yes")
            break
    else:
        print("no")
