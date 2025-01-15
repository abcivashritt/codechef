for _ in range(int(input())):
    left, right = map(len, input().split('W'))
    left, right = left - min(left, right), right - min(left, right)
    print("Chef" if left == right else "Aleksa")
