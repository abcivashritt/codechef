for _ in range(int(input())):
    n = int(input())
    s = input()
    ones = s.count('1')
    zeros = s.count('0')
    print("NO" if (ones % 2 == 1 and zeros % 2 == 1 and ones != zeros) else "YES")
