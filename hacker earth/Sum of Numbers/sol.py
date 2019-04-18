import itertools as it
t=int(input())
while(t):
    t=t-1
    n=int(input())
    d=0
    l=[int(x) for x in input().split()]
    k=int(input())
    for i in range(1,n+1):
        s=list(it.combinations(l,i))
        for j in s:
            c=sum(j)
            if(c==k):
                d=1
                break
        if(d==1):
            break
    if(d==1):
        print("YES")
    else:
        print("NO")
