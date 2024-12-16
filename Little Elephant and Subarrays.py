n = int(input())
a = [int(ai) for ai in input().split()]
dd = {}
for i, ai in enumerate(a):
    if ai in dd:
        dd[ai].append(i)
    else:
        dd[ai] = [i]
q = int(input())
for qi in range(q):
    x = int(input())
    ind = dd.get(x, -1)
    if ind == -1:
        print(0)
        continue
    total = 0
    for indi in ind:
        left = indi - 1
        right = indi
        while left >= 0 and a[left] > x:
            left -= 1
        while right < n and a[right] >= x:
            right += 1
        total += ((indi - left) * (right - indi))
    print(total)
