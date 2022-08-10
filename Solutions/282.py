n=input()
n=int(n)
m=0
for i in range(1,n):
    if(n%i==0):
        m+=i
if(m==n):
    print("YES")
else :
    print("NO")