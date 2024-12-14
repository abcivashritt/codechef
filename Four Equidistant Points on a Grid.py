d = int(input())
if d % 2:
    print(-1)
else:
    print(f"0 0\n0 {d}\n{d//2} {d//2}\n-{d//2} {d//2}")
