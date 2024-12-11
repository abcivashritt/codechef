for _ in range(int(input())):
    n = int(input())
    print("Alice" if (n > 2 and n % 2 == 1) else "Bob")
