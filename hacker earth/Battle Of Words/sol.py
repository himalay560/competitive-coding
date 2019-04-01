t=int(input())
while(t):
    t=t-1
    s=input()
    a=input()
    l=[]
    n=[]
    for i in range(0,26):
        l.append(0)
        n.append(0)
    for i in s:
        if i==" ":
            continue
        else:
            c=ord(i)-97
            l[c]+=1
    for i in a:
        if i==" ":
            continue
        else:
            c=ord(i)-97
            n[c]+=1
    h=0
    k=0
    c=0
    for i in range(0,26):
        if(l[i]>n[i]):
            k+=1
        elif l[i]<n[i]:
            h=h+1
    if(k==0 and h!=0):
        print("You lose some.")
    elif(k!=0 and h==0):
        print("You win some.")
    else:
        print("You draw some.")
