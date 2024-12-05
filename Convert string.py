for _ in range(int(input())):
    n = int(input())
    s = input()
    ones = s.count('1')
    zeros = s.count('0')
    if ones == 0:
        ones += min(2, n)
    if zeros == 0:
        zeros += min(2, n)
    if ones % 2 == zeros % 2:
        print((n - min(ones, zeros)) // 2 + 1)
    else:
        print( (n - ones) // 2 + 1 + (n - zeros) // 2 + 1)
