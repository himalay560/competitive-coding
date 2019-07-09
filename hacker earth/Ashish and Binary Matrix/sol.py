t=int(input())
while t:
    t-=1
    d={}
    n=[int(x) for x in input().split()]
    c=n[0]
    e=0
    while(n[0]):
        n[0]-=1
        s=input()
        if s in d:
            continue
        else:
            d[s]=1
            e+=1
    if(e==c):
        print("Yes")
    else:
        print("No")
