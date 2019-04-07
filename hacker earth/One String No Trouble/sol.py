s=input()
n=len(s)
c=0
d=0
for i in range(n-1):
    if(s[i]==s[i+1]):
        c=0
    else:
        c=c+1
    if d<c:
        d=c
print(d+1)
