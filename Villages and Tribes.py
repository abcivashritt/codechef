for _ in range(int(input())):
    s = input()
    prev = ""
    count = 0
    a = 0
    b = 0
    for c in s:
        if c == '.':
            count += 1
        else:
            if prev != c:
                count = 1
            prev = c
            if prev == "A":
                a += count
            elif prev == "B":
                b += count
            count = 1
    print(a, b)
