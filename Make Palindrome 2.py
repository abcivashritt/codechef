for _ in range(int(input())):
    n = int(input())
    s = input()
    ones = s.count('1')
    zeros = s.count('0')
    print(('0' * zeros) if ones < zeros else ('1' * ones))
