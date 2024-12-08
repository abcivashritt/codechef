MOD = 1000000007

for _ in range(int(input())):
    s = input().strip()
    val = 1
    l = 1
    for si in s:
        val *= 2
        if l%2 == 0:
            if si == 'l':
                val -= 1
            else:
                val += 1
        else:
            if si == 'r':
                val += 2
        l += 1
    print(val % MOD)
