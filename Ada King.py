for _ in range(int(input())):
    n = int(input())
    s = "O" + "." * (n-1) + "X" * (64 - n)
    for i in range(8):
        print(s[i*8:(i+1)*8])
