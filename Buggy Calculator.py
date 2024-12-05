for _ in range(int(input())):
    a, b = map(int, input().split())
    l = []
    index = 0
    last_index = 0
    while a > 0 or b > 0:
        l.append((a%10 + b%10)%10)
        if l[index] != 0:
            last_index = index
        a //= 10
        b //= 10
        index += 1
    l = l[:last_index+1]
    l.reverse()
    print(*l, sep = "")
