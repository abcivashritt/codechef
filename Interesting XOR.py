for _ in range(int(input())):
    n = int(input())
    s = bin(n)[2:]
    t = "1" + "".join(["0" if s[i] == "1" else "1" for i in range(1, len(s))])
    u = "0" + ("1" * (len(s) - 1))
    print(int(t, 2) * int(u, 2))
