for _ in range(int(input())):
    x, y = map(int, input().split())
    if abs(x - y) >= 2:
        print("CHEF" if x > y else "CHEFINA")
    else:
        print("CHEF" if min(x, y) % 2 else "CHEFINA")
