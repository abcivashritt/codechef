for _ in range(int(input())):
    n = int(input())
    stack = []
    total = 0
    for i, ai in enumerate(input().split()):
        ai = int(ai)
        if ai != 0:
            if not bool(stack):
                stack.append((ai < 0, abs(ai), i))
            else:
                sign = (ai < 0)
                ai = abs(ai)
                while ai != 0 and bool(stack) and sign != stack[-1][0]:
                    st_sign, num, ind = stack.pop()
                    if num >= ai:
                        num -= ai
                        total += (i - ind) * ai
                        ai = 0
                        if num > 0:
                            stack.append((st_sign, num, ind))
                    else:
                        ai -= num
                        total += (i - ind) * num
                if ai > 0:
                    stack.append((sign, ai, i))
    print(total)
