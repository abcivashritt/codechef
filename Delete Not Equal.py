for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    ones = [len(si) for si in s.split('1') if len(si) != 0]
    zeros = [len(si) for si in s.split('0') if len(si) != 0]
    if ones and zeros:
        print(1)
    elif ones:
        print(ones[0])
    else:
        print(zeros[0])
