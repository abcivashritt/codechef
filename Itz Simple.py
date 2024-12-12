for _ in range(int(input())):
    n, k, p = map(int, input().split())
    a = [int(ai) for ai in input().split()]
    k += max(a)
    p += sum(a) - max(a)
    print("Ved" if k > p else ("Varun" if p > k else "Equal"))
