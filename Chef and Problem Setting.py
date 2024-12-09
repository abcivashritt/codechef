for _ in range(int(input())):
    n, m = map(int, input().split())
    invalid = False
    weak = False
    for i in range(n):
        s, t = input().split()
        if s == "correct" and t.find('0') != -1:
            invalid = True
        elif s == "wrong" and t.find('0') == -1:
            weak = True

    print("INVALID" if invalid else ("WEAK" if weak else "FINE"))
