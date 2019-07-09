a=[int(x) for x in input().split()]
n=a[0]
q=a[1]
l=[]
while(n):
    n-=1
    s=input()
    s=s.split()
    m=[]
    m.append(s[0])
    m.append(int(s[1]))
    l.append(m)
l=sorted(l,key=lambda x: (-x[1],x[0]))
i=0
while q:
    print(l[i][0])
    i+=1
    q-=1
