for _ in range(int(input())):
    n = int(input())
    ans = True
    for i, ai in enumerate(input().split()):
        ai = int(ai)
        if bin(i + 1)[2:].count('1') != bin(ai)[2:].count('1'):
            ans = False
    print("Yes" if ans else "No")
