for _ in range(int(input())):
    l,d,s,c = map(int, input().split())
    c += 1
    total = 1
    l /= s
    for i in range(d):
        if total >= l:
            print("ALIVE AND KICKING")
            break
        total *= c
    else:
        print("DEAD AND ROTTING")
