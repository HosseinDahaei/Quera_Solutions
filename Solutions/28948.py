matn=input()
matn=list(matn)
i=0
while(i<len(matn)):
    if(i<0):
        i+=1
        continue
    if matn[i]=='=':
        del matn[i]
        if i>0:
            del matn[i-1]
        i-=2    
    i+=1
for i in matn:
    print(i,sep="",end="")
print()