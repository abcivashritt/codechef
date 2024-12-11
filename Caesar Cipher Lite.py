for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    t = input().strip()
    k = [(ord(ti) - ord(si)) % 26 for si, ti in zip(s, t)]
    for i in range(n):
        while k[i] % 3 != 0:
            k[i] += 26
        k[i] //= 3
    print(*k)
