t=int(input())
while(t):
    t=t-1
    s=input()
    v=list(s.split(" "))
    k="not"
    if k in v:
        print("Real Fancy")
    else:
        print("regularly fancy")
