for _ in range(int(input())):
    n = int(input())
    parity = n%2
    n //= 10
    while n > 0:
        if n%2 == parity:
            print("YES")
            break
        n //= 10
    else:
        print("NO")
