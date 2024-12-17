for _ in range(int(input())):
    h, m = map(int, input().split())
    total = 1
    for i in range(ord('1') , ord('9') + 1):
        hh = chr(i)
        while int(hh) < h:
            mm = chr(i)
            while int(mm) < m:
                total += 1
                mm += chr(i)
            hh += chr(i)
    print(total)
