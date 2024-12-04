for _ in range(int(input())):
    n = int(input())
    a = list(map(lambda ai:int(ai)%2, input().split()))
    ones = a.count(1)
    zeros = a.count(0)
    ones = min(ones, n//2)
    zeros = min(zeros, (n+1)//2)
    print(ones + zeros)
