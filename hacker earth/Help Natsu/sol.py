t=int(input())
while t:
    t-=1
    d={}
    n=int(input())
    while n:
        n-=1
        s=input()
        if s in d:
            d[s]+=1
        else:
            d[s]=1
    l=[]
    for i in d.items():
        m=[]
        m.append(i[0])
        m.append(i[1])
        l.append(m)
    l=sorted(l,key=lambda x: (x[1],x[0]))
    for i in l:
        print(str(i[1])+" "+str(i[0]))
