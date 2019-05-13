n=int(input())
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
k=b[1]
l=b[0]
c=0
i=0
h=0
f=1
while l:
    l=l-1
    s=input()
    if(s=="Harry"):
        c=c+a[i]
        i=i+1
        h=h+1
    else:
        i=i-1
        c=c-a[i]
        del a[i]
        h=h-1
    if(c==k):
        f=0
        print(h)
        break
if(f):
    print("-1")
