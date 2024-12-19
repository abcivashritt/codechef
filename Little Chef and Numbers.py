for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    zeros = a.count(0)
    ones = a.count(1)
    twos = a.count(2)
    n -= ones 
    n -= zeros
    print(twos * (n - twos) + (n-twos) * (n-twos -1) // 2)
