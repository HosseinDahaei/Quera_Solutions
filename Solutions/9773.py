n=input()
n=int(n)
nimo=(n+1)//2
space=(n+1)//2-1
star=1
for i in range(1,n+1):
    #first space
    for j in range(0,abs(space)):
        print(" ",sep="",end="")
    #first star
    for j in range(0,star):
        print("*",sep="",end="")
    #second space
    for j in range(0,abs(2*space)):
        print(" ",sep="",end="")
    #second star
    for j in range(0,star):
        print("*",sep="",end="")
    space-=1
    if i>=nimo :
        star-=2
    else :
        star+=2
    print()
    