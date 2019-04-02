t=int(input())
while(t):
    t=t-1
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    if((a[0]==a[2] and a[1]==a[3]) or (b[0]==b[2] and b[1]==b[3])):
        print("INVALID")
    else:
        c=a[0]-a[2]
        d=b[0]-b[2]
        e=b[1]-b[3]
        g=a[1]-a[3]
        if c==0 or d==0:
            if e==0 or g==0:
                print("YES")
            else:
                print("NO")
        else:
            f=(e*g)/(d*c)
            if f==-1:
                print("YES")
            else:
                print("NO")
