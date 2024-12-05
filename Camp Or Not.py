for _ in range(int(input())):
    d = int(input())
    c = [0] * 32
    for i in range(d):
        di, pi = map(int, input().split())
        for ci in range(di, 32):
            c[ci] += pi
    q = int(input())
    for i in range(q):
        di, ri = map(int, input().split())
        print("Go Camp" if c[di] >= ri else "Go Sleep")
