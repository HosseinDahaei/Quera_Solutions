n=input()
n=int(n)
m=0
t=n
while(t>0):
    m*=10
    m+=t%10
    t//=10
if(n==m):
    print("YES")
else :
    print("NO")