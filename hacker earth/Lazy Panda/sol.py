t=int(input())
while(t):
    t=t-1
    n=int(input())
    c=bin(n)
    d=c.count('1')
    print(d)
