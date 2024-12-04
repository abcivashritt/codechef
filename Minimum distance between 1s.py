for _ in range(int(input())):
    n = int(input())
    s = input()
    print(1 if (s[::2].find('1') != -1 and s[1::2].find('1') != -1) else 2)
