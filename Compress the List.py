for _ in range(int(input())):
    n = int(input())
    a = [int(ai) for ai in input().split()]
    i = 0
    ans = ""
    while i < n:
        ans += f"{a[i]}"
        if i + 2 < n and a[i] + 2 == a[i + 2]:
            ans += "..."
            while i + 1 < n and a[i] + 1 == a[i + 1]:
                i += 1
            ans += f"{a[i]}"
        i += 1
        if i < n:
            ans += ","
    print(ans)
