n, q = map(int, input().split())

row = {}
col = {}
for i in range(q):
    s, sa, sb = input().split()
    a = int(sa)
    b = int(sb)

    if s == "RowAdd":
        if a in row:
            row[a] = row.get(a) + b
        else:
            row[a] = b
    else:
        if a in col:
            col[a] = col.get(a) + b
        else:
            col[a] = b

print((0 if not bool(row) else max(row.values())) + (0 if not bool(col) else max(col.values())))
