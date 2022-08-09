n=input()
n=int(n)

for i in range(1,n+1):
    for j in range(1,n+1):
        if(i==1 or i==n):
            print("*",sep="",end="")
        elif (j==1 or j==n):
            print("*",sep="",end="")
        else :
            print(" ",sep="",end="")
    print("\n")