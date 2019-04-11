t=int(input())
while(t):
    t-=1
    s=input()
    for i in s:
        a=ord(i)
        if(a<100):
            print("a",end="")
        elif(a>99 and a<103):
            print("e",end="")
        elif(a>102 and a<106):
            print("g",end="")
        elif(a>105 and a<109):
            print("k",end="")
        elif(a>108 and a<112):
            print("m",end="")
        else:
            print("q",end="")
    print(" ")
