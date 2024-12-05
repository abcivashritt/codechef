for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [0] * m 
    for i in range(n):
        a = [int(bi) + ai for (bi, ai) in zip(input(), a)] 
    a = [ai * (ai-1) // 2 for ai in a]
    print(sum(a))
