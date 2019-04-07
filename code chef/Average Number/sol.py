t=int(input())
while(t):
    t-=1
    a=[int(x) for x in input().split()]
    n=a[0]+a[1]
    k=a[1]
    v=a[2]
    l=[int(x) for x in input().split()]
    s=sum(l)
    y=(v*n -s)/k
    z=(v*n-s)//k
    if y==z and y>0:
        print(z)
    else:
        print("-1")
