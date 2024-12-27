MOD = 1000000007

total = [1, 2]
for _ in range(int(input())):
    n, g = map(int, input().split())
    for i in range(len(total), n):
        total.append((total[i-1] + total[i-2]) % MOD)
    print("CORRECT" if bin(total[n-1])[2:].count('1') == g else "INCORRECT")
