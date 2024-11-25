T = int(input())
for test_case in range(T):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    total = n*(n+1)//2
    print(total - sum(a))
