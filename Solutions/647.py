n=input()
n=int(n)
m=input()
m=int(m)
sum=0
for i in range(-10,m+1):
    for j in range(1,n+1):
        sum=sum+(i+j)*(i+j)*(i+j)/(j*j)
print(int(sum))