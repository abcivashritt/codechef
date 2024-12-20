for _ in range(int(input())):
    n, a, b = map(int, input().split())
    al = [int(ai) for ai in input().split()]
    bl = []
    for ai in al:
        if ai % a == 0 and ai % b == 0:
            bl.append(-1)
        elif ai % a == 0:
            bl.append(-1)
        elif ai % b == 0:
            bl.append(1)
    print("BOB" if bl.count(-1) > bl.count(1) else "ALICE")
