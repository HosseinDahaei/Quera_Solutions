n,k=map(int,input().split(" "))
for i in range(k):
    n=n/2

if n<0 and n%1>0:
    n=int(n)-1
else:
    n=int(n)
print(n)