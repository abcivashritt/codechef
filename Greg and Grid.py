LAST = 2000001
primes = []
is_prime = [True] * LAST
for i in range(2, LAST):
    if is_prime[i]:
        primes.append(i)
        for j in range(i*i, LAST, i):
            is_prime[j] = False

def bin_search(ele):
    left = 0
    right = len(primes) - 1
    while left < right:
        mid = (left + right + 1) // 2
        if primes[mid] == ele:
            return mid
        elif ele < primes[mid]:
            right = mid - 1
        else:
            left = mid
    return left

n, m = map(int, input().split())
mid = bin_search(n + m)
print(mid + 1)
