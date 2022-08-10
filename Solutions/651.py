def turnit(n):
    m=0
    while n>0:
        m=m*10+n%10
        n//=10
    return m
#------------------------------------
a=input()
a=int(a)
b=input()
b=int(b)
c=input()
c=int(c)

m=0
i=0

while a>0:
    m=m+(a%10)*b**i
    a//=10
    i+=1
k=1
result=0
#print(m)
while m>c:
    result=result*10+m%c
    m//=c

result=result*10+m

#print(result)

if turnit(result)==result:
    print("YES")
else :
    print("NO")