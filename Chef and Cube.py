for _ in range(int(input())):
    front, back, left, right, top, bottom = input().split()

    if (front == right and front == top) or \
        (front == right and front == bottom) or \
        (front == left and front == top) or \
        (front == left and front == bottom) or \
        (back == right and back == top) or \
        (back == right and back == bottom) or \
        (back == left and back == top) or \
        (back == left and back == bottom):
            print("YES")
    else:
        print("NO")
