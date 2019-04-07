s=input()
c=0
f=0
n=0
for i in s:
    n+=1
    d=int(i)
    if(d>0 and d<7):
        if(d==6):
            continue
        else:
            c+=1
    else:
        f=1
        break
if(f==1 or s[n-1]=='6'):
    print("-1")
else:
    print(c)
