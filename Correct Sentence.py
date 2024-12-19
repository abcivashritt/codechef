for _ in range(int(input())):
    s = input().split()
    if all(all(c >= 'a' and c <= 'm' for c in s[i]) or all(c >= 'N' and c <= 'Z' for c in s[i]) for i in range(1, int(s[0]) + 1)):
        print("YES")
    else:
        print("NO")
