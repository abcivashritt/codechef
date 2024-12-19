n, k = map(int, input().split())
a = [int(ai) for ai in input().split()]
while min(a) != 0 and k > 0:
    largest = max(a)
    a = [largest - ai for ai in a]
    k -= 1
if k % 2:
    largest = max(a)
    a = [largest - ai for ai in a]
print(*a)
