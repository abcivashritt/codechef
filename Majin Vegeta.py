SIZE = 1000005
primes = []
is_prime = [True] * SIZE
for i in range(2, SIZE):
    if is_prime[i]:
        primes.append(i)
        for j in range(i*i, SIZE, i):
            is_prime[j] = False

for _ in range(int(input())):
    n, m = map(int, input().split())
    total = 0
    for pi in primes:
        if pi > m:
            break
        total += ((m - 1) // pi - (n - 1) // pi)
    print(total)
