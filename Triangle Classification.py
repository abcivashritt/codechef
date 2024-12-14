from math import dist, acos, degrees

sub = int(input())
for _ in range(int(input())):
    x1, y1, x2, y2, x3, y3 = map(int, input().split())
    ss = set()
    a = dist([x1, y1], [x2, y2])
    b = dist([x2, y2], [x3, y3])
    c = dist([x1, y1], [x3, y3])
    ss.update([a, b, c])
    print("Scalene" if len(ss) == 3 else "Isosceles", end = " ")
    if sub == 2:
        ang = [0.0] * 3
        ang[0] = degrees(acos((a**2 + b**2 - c**2) / (2 * a * b)))
        ang[1] = degrees(acos((b**2 + c**2 - a**2) / (2 * b * c)))
        ang[2] = degrees(acos((a**2 + c**2 - b**2) / (2 * a * c)))
        if all(90 - ang[i] > 1e-7 for i in range(3)):
            print("acute", end = " ")
        elif any(abs(90 - ang[i]) <= 1e-7 for i in range(3)):
            print("right", end = " ")
        else:
            print("obtuse", end = " ")
    print("triangle")
