from math import sqrt

for _ in range(int(input())):
    n = int(input())
    right = int(sqrt(n)) - 1
    while right * (right + 1) // 2 <= n:
        right += 1
    left = right - 1
    left_n = left * (left + 1) // 2
    right_n = right * (right + 1) // 2
    print(min(n, right + abs(right_n - n), left + abs(n - left_n)))
