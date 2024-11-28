for _ in range(int(input())):
    n, x, y = map(int, input().split())
    a = 0
    b = 0
    found = False
    s = input()
    for i in range(len(s)):
        match s[i]:
            case 'L':
                a -= 1
            case 'R':
                a += 1
            case 'U':
                b += 1
            case 'D':
                b -= 1
        found = True if (abs(x - a) + abs(y - b) == i + 1 and not found) else found
    print("Yes" if found else "No")
