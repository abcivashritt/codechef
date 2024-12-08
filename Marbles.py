for _ in range(int(input())):
    a, b = map(int, input().split())
    smallest = 10000
    for i in range(0, 1000):
        if a-i == 0:
            break
        elif (a-i) % (b+i) == 0:
            smallest = min(smallest, i)
    for i in range(0, 1000):
        if b-i == 0:
            break
        elif (a+i) % (b-i) == 0:
            smallest = min(smallest, i)
    print(smallest)
