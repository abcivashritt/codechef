for _ in range(int(input())):
    s = input();
    t = "-+" * (len(s)//2) + ("-" if len(s)%2 else "")
    u = "+-" * (len(s)//2) + ("+" if len(s)%2 else "")

    count1 = count2 = 0
    for (a, b, c) in zip(s, t, u):
        if a != b:
            count1 += 1
        if a != c:
            count2 += 1

    print(min(count1, count2))
