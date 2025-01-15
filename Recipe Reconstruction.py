MOD = 10000009

powers = [0] * 30
powers[1] = 26
for i in range(2, 30):
    powers[i] = powers[i-1] ** 2
    powers[i] %= MOD

for _ in range(int(input())):
    s = list(input().strip())
    left = 0
    right = len(s) - 1
    while left < right:
        if s[left] != s[right]:
            if s[left] == '?':
                s[left] = s[right]
            elif s[right] == '?':
                s[right] = s[left]
        left += 1
        right -= 1
    s = "".join(s)
    if s != s[::-1]:
        print(0)
    else:
        q = (s.count("?") + 1)// 2
        total = 1
        ind = 1
        while q > 0:
            if q & 1:
                total = total * powers[ind] % MOD
            q >>= 1
            ind += 1
        print(total)
