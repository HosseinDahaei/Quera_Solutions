def bmm(a,b):
    if a<b :
        return bmm(b,a)
    elif(a==b):
        return a
    elif a==0:
        return b
    elif b==0 :
        return a
    else :
        return bmm(b,a%b)

#---------------------
def kmm(a,b):
    s=0
    if a<b:
        return kmm(b,a)
    else :
        while 1:
            s+=a
            if(s%b==0):
                return s
    return -1
#------------------------




a,b=map(int,input().split())

print(bmm(a,b),kmm(a,b))