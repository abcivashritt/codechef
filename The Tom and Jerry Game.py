for _ in range(int(input())):
    ts = int(input())
    while(ts > 0):
        if ts & 1:
            ts = ts >> 1
            break;
        ts = ts >> 1
    print(ts)
