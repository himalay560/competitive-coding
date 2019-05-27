a=[int(x) for x in input().split()]
d={}
for i in range(a[0]):
    s=input()
    n=len(s)
    for i in range(1,n+1):
        if s[:i] in d:
            d[s[:i]]+=1
        else:
            d[s[:i]]=1
for i in range(a[1]):
    s=input()
    if s in d:
        print(d[s])
    else:
        print("0")
