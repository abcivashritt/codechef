for _ in range(int(input())):
    a = [0] * 10
    for i in input().strip():
        a[int(i)] += 1
    s = ""
    for i in range(65, 91):
        if a[i // 10]:
            s += (chr(i) if (a[i%10] - (1 if i//10 == i%10 else 0)) else '')
    print(s)
