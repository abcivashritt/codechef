for _ in range(int(input())):
    h, l, w = map(int, input().split())
    print(1000 // (2 * (h * l + l * w + w * h)))
