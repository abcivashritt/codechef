for _ in range(int(input())):
    h = v = 1
    n = int(input())
    sw = vw = False
    for i in range(n):
        if input().strip()[-3:] == "man":
            h += 1
        else:
            v += 1
        if not sw and not vw:
            if h >= v + 2:
                sw = True
            elif v >= h + 3:
                vw = True
    print("superheroes" if sw else ("villains" if vw else "draw"))
