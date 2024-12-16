n = int(input())

def sum_of_digits(n):
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total


c = 0
for i in range(n, n-100, -1):
    if i + sum_of_digits(i) + sum_of_digits(sum_of_digits(i)) == n:
        c += 1
print(c)
