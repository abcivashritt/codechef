for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    i = 0
    a = []
    while i < n:
        c = 1
        i += 1
        while i < n and s[i] == s[i-1]:
            c += 1
            i += 1
        a.append(c)
    print("Zlatan" if min(sum(a[0::2]), sum(a[1::2])) % 2 else "Ramos")
