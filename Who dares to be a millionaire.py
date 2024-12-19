for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    t = input().strip()
    a = [int(ai) for ai in input().split()]
    total = sum([1 for si, ti in zip(s, t) if si == ti])
    print(max(a[:total+1]) if n > total else a[total])

