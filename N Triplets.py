SIZE = 100001
primes = []
is_prime = [True] * SIZE
for i in range(2, SIZE):
    if is_prime[i]:
        primes.append(i)
        for j in range(i*i, SIZE, i):
            is_prime[j] = False

for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(len(primes)):
        if n <= primes[i]:
            a.append(-1)
            break
        if n % primes[i] == 0 and primes[i] != (n // primes[i]):
            a.append(primes[i])
            a.append(n // primes[i])
            a.append(1)
            break
    else:
        a.append(-1)
    print(*a)
