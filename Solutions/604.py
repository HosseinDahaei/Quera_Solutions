n=input()
n=int(n)
if n==2:
    print("1")
else :
    
    arr=[0]*n

    #for i in range(0,n):
       # print(arr[i])
    kiled=0
    j=1 ## andis of arr
    killit=1
    while 1:
        #print("------------------------------------------")
       # for i in range(0,n):
       #     print(i,arr[i])
        #print("------------------------------------------")
        if arr[j]==0:
            if killit==1:
                arr[j]=1
                kiled+=1
                killit=0
            else : killit=1
        j+=1
        j%=n
        if kiled==n-1:break


    for i in range(0,n):
        if arr[i]==0:
            print(i+1)
            break
    