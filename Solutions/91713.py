import re


def func(number=" "):
    ok = False
    if number==number[::-1]:
        ok=True
    for i in range(0,6):
        if number[i]==number[i+1] and number[i+1]==number[i+2]:
            ok=True
    repeat=[0 for i in range(10)]
    for i in number:
        repeat[int(i)]+=1
    for i in repeat:
        if i>=4:
            ok=True
    if ok:
        print("Ronde!")
    else:
        print("Rond Nist")

number = int(input())
for i in range(number):
    line = input()
    func(line.strip())