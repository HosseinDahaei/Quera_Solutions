def turnit(n):
    m=0
    while n>0:
        m*=10
        m+=n%10
        n//=10
    return m

def showit(n):
    print(n,": ",end="",sep="")
    for i in range(0,n):
        print(n,end="")
    print(end="\n")
    
n=input()
n=int(n)


m=n*10+1
m=turnit(m)
while m>9:
    showit(m%10)
    m//=10
 