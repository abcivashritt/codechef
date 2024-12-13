n, m = map(int, input().split())
a = [int(ai) for ai in input().split()]
start = 0
for i in range(m):
    c, d = input().split()
    if c == 'C':
        start += int(d)
        start %= n
    elif c == 'A':
        start -= int(d)
        start %= n
    elif c == 'R':
        print(a[(start + int(d) - 1) % n])
