t=int(input())
while(t):
    t-=1
    r=int(input())
    x=1
    c=0
    while(x<(r-6)):
        y=1
        while((x+3*y)<(r-3)):
            z=(r-x-3*y)//4
            if((x+3*y+4*z)==r):
                c+=1
            y=y+1
        x=x+1
    print(c)