s=input()
n=len(s)
f=0
for i in range(n):
    a=s[i:n]
    if(a!=a[::-1]):
        f=1
        c=len(a)
        print(c)
        break
if(f==0):
    print(f)
