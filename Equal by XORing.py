for _ in range(int(input())):
    a, b, n = map(int, input().split())
    a = bin(a)[2:]
    b = bin(b)[2:]
    largest = max(len(a), len(b))
    a = "0" * (largest - len(a)) + a
    b = "0" * (largest - len(b)) + b
    x = ""
    for ai, bi in zip(a, b):
        x += ("1" if ai != bi else "0")
    ind = 0
    while ind < len(x) and x[ind] == "0":
        ind += 1
    x = x[ind:]
    if a == b:
        print(0)
    elif int(x, 2) < n:
        print(1)
    elif 2**(len(x)-1) < n:
        print(2)
    else:
        print(-1)
