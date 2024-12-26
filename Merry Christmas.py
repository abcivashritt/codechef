n = int(input())
print(3 if n >= 7 else bin(n)[2:].count('1'))
