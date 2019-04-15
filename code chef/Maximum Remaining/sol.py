n=int(input())
a=[int(x) for x in input().split()]
a.sort()
d=0
for i in range(n-1,1,-1):
    if(a[i]!=a[i-1]):
        d=a[i-1]
        break
print(d)
