for _ in range(int(input())):
    s = input()
    if len(s) != 5 or not(
        s[0] >= 'a' and
        s[0] <= 'h' and
        s[1] >= '1' and
        s[1] <= '8' and
        s[2] == '-' and
        s[3] >= 'a' and
        s[3] <= 'h' and
        s[4] >= '1' and
        s[4] <= '8'):
        print("Error")
    elif (abs(ord(s[0]) - ord(s[3])), abs(ord(s[1]) - ord(s[4]))) in [(1, 2) , (2, 1)]:
        print("Yes")
    else:
        print("No")
