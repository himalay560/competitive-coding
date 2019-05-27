n=int(input())
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
d={}
for i in range(n):
    if a[i] in d:
        d[a[i]]=max(b[i],d[a[i]])
    else:
        d[a[i]]=b[i]
for i in a:
    print(d[i],end=" ")
