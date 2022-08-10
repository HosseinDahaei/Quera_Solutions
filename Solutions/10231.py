s1= input()
s2=input()
s3=input()
s4=input()
s5=input()
n1=0
n2=0
n3=0
n4=0
n5=0



if ("MOLANA" in s1 or "HAFEZ" in s1) :
    n1=1
    print(1,end=" ")
if("MOLANA" in s2 or "HAFEZ" in s2) :
    n2=1
    print(2,end=" ")
if("MOLANA" in s3 or "HAFEZ" in s3) :
    n3=1
    print(3,end=" ")
if("MOLANA" in s4 or "HAFEZ" in s4) :
    n4=1
    print(4,end=" ")
if("MOLANA" in s5 or "HAFEZ" in s5) :
    n5=1
    print(5,end=" ")
if(n1==0 and n2==0 and n3==0 and n4==0 and n5==0):
    print("NOT FOUND!")