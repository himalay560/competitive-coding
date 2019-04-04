a=int(input())
b=[int(x) for x in input().split()][:a]
b.sort()
c=0
d=0
h=b[a-1]
#print(b)
for i in range(0,a-1):
    if(b[i]==b[i+1]):
        c+=1
    else:
        c=0
    if(c>d):
        d=c
        h=b[i]
print(h)
