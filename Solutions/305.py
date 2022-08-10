def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)
n=input()
n=int(n)
m=input()
m=int(m)

if(m<n):
    t=n
    n=m
    m=t

print(gcd(n,m))