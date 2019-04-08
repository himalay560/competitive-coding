t=int(input())
while(t):
    t=t-1
    s=input()
    n=len(s)
    c=ord(s[0])-ord('a')
    if(c>=0 and c<14):
        print(c,end=" ")
    else:
        print(c-26,end=" ")
    for i in range(1,n):
        c=ord(s[i])-ord(s[i-1])
        if(c>=0 and c<14):
            print(c,end=" ")
        elif(c==-13):
            print("13",end=" ")
        elif(c<0 and c>-13):
            print(c,end=" ")
        elif(c>0):
            print(c-26,end=" ")
        else:
             print(c+26,end=" ")
    print(" ")
