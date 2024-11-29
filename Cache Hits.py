for _ in range(int(input())):
    n, b, m = map(int, input().split())
    a = list(map(int, input().split()))
    first = -1
    count = 0
    for ai in a:
        if first != ai//b:
            first = ai//b
            count += 1
    print(count)
