def maxfibo(n):
    t=m=1
    while m<=n :
        x=t
        t=m
        m=x+t
    return t
#-----------------------
def countfibo(k):
    t=1
    m=2
    number=1
    while t!=k :
        x=t
        t=m
        m=x+t
        number+=1
    return number

n=input()
n=int(n)
while n>0 :
    k=maxfibo(n)
    n-=k
    print(countfibo(k),end=' ')
    