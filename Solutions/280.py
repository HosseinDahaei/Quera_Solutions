n=input()
n=int(n)
m=input()
m=int(m)
s=input()
s=int(s)
if s*s==m*m+n*n :
    print("YES")
elif m*m==s*s+n*n :
    print("YES")
elif n*n==s*s+m*m:
    print("YES")
else :
    print("NO")