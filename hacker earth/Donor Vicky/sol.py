t=int(input())
while(t):
    t-=1
    m=[int(x) for x in input().split()]
    n=m[0]
    x=m[1]
    c=1
    d=1
    while(x>d):
        c=(c+1)%n
        if c==0:
            c=n
        x=x-d
        d=d+1
    print(c)
