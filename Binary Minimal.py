for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input().strip()
    if k >= s.count("1"):
        print("0" * (n - k))
    else:
        ind = 0
        while k > 0:
            if s[ind] == '1':
                k -= 1 
            ind += 1
        print("0" * ind + s[ind:])

