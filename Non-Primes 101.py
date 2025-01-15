LAST = 201
is_prime = [True] * LAST
for i in range(2, LAST):
    if is_prime[i]:
        for j in range(i*i, LAST, i):
            is_prime[j] = False

for _ in range(int(input())):
    n = int(input())
    a = {}
    for i, ai in enumerate(input().split()):
        ai = int(ai)
        if ai not in a:
            a[ai] = i + 1
        else:
            if not is_prime[2 * ai]:
                print(*sorted([a[ai], i + 1]))
                break
    else:
        for ai, vai in a.items():
            for bi, vbi in a.items():
                if vai != vbi:
                    if not is_prime[ai + bi]:
                        print(*sorted([vai, vbi]))
                        break
            else:
                continue
            break
        else:
            print(-1)
