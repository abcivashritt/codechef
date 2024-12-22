n = [int(ni) for ni in input().split()]
for i in range(1, n[0] + 1):
    a = [0] * (n[i] + 1)
    a[0]=1
    a[1]=1
    for j in range(2,n[i]+1):
        a[j]=a[j-1] + 2 * a[j-2]
    print(a[n[i]- 1], 2**n[i], end = " ")
print()
