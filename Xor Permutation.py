for _ in range(int(input())):
    n = int(input())
    if n == 3:
        print(-1)
        continue
    a = [1, 2, 4, 3]
    for i in range(5, n + 1):
        if a[len(a) - 2] ^ a[len(a) - 1] != i:
            a.append(i)
        elif a[0] ^ i != a[1]:
            a.insert(0, i)
        else:
            print(-1)
            break
    else:
        print(*a)
