s=input()
n=len(s)
l=[]
for le in range(1,n+1):
    for i in range(0,n-le+1):
        a=""
        j=i+le-1
        for k in range(i,j+1):
            a=a+s[k]
        l.append(a)
m=len(l)
c=0
h=[]
for i in range(m):
    for j in range(i+1,m):
        x=l[i]+l[j]
        y=l[j]+l[i]
        if x==x[::-1]:
            h.append(x)
            c=c+1
        if y==y[::-1]:
            h.append(y)
            c=c+1
print(h)
print(c)    
