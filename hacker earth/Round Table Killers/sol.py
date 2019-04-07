l=[int(x) for x in input().split()]
n=l[0]
k=l[1]
x=l[2]
a=[]
for i in range(n):
    a.append(i+1)
x=x-1
j=x
m=n
while(m):
    y=a[j]%k
    while(y):
        j=(j+1)%n
        if(a[j]!=0):
            a[j]=0
            y-=1
            m-=1
        if(m==1):
            break
    if(m==1):
        break
    else:
        j=(j+1)%n
        while(a[j]==0):
            j=(j+1)%n 
for i in a:
    if i!=0:
        print(i)
        break
