def get_num_days(y, m):
    days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if m == 2 and ((y % 4 == 0 and y % 100 != 0) or y % 400 == 0):
        return days[m] + 1
    return days[m]

for _ in range(int(input())):
    y, m, d = map(int, input().split(':'))
    total = 0
    first_day = d
    this_m = get_num_days(y, m)
    total += (this_m - first_day + 2) // 2
    last_day = first_day + (total - 1) * 2 
    remaining = this_m - last_day
    first_day = (1 if d % 2 else 2)
    if first_day == 2:
        remaining += 1
    while remaining == 1:
        m += 1
        if m > 12:
            y += 1
            m -= 12
        this_m = get_num_days(y, m)
        this_total = (this_m - first_day + 2) // 2
        last_day = first_day + (this_total - 1) * 2 
        total += this_total
        remaining = this_m - last_day
        if first_day == 2:
            remaining += 1
    print(total)
