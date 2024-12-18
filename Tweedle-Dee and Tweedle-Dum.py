for _ in range(int(input())):
    ns, s = input().split()
    n = int(ns)
    a = [int(ai) for ai in input().split()]
    if s == "Dee" and n == 1 and a[0] % 2 == 0:
        print("Dee")
    else:
        print("Dum")
