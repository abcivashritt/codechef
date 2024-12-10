for _ in range(int(input())):
    gh, gm = map(int, input().split(":"))
    ch, cm = map(int, input().split(":"))
    dist = int(input())

    gt = gh * 60 + gm
    ct = ch * 60 + cm

    first = gt - ct + dist
    second = gt - ct + (max(0, 2*dist - gt + ct) / 2.0)
    print(f"{first:.1f} {second:.1f}")
