def find(n):
    c=0
    m=n;
    while(n>0):
        n=n//2
        c+=1
    if(m&(m-1)):
        return c
    else:
        return c-1
t=int(input())
while(t):
    t-=1
    c=0
    i=0
    l=[int(x) for x in input().split()]
    a=l[0]
    b=l[1]
    d=find(b)
    a=a-1;
    while(a>0):
        if(i==0):
            i+=1
            f=0
        else:
            f=2**(i-1)
            if(b>f):
                i+=1
            if(b<=f):
                f=b
                break
        a=a-f
        c+=1
    if(a<=0):
        c=c
    elif(a%b==0):
        c=c+a//b
    else:
        c=c+a//b+1
    print(c)
