#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str1[15];
    char str2[15];
    char str3[15];
    char str4[15];
    char c1,c2,c3,c4;
    scanf("%s %c",str1,&c1);
    scanf("%s %c",str2,&c2);
    scanf("%s %c",str3,&c3);
    scanf("%s %c",str4,&c4);

    if(c1==c2 && c2==c3) cout<<str2<<endl;
    else if(c1==c2 && c2==c4) cout<<str2<<endl;
    else if(c1==c3 && c3==c4) cout<<str3<<endl;
    else if(c2==c3 && c3==c4) cout<<str3<<endl;
    else if(c1==c2)cout<<str1<<endl;
    else if(c1==c3)cout<<str1<<endl;
    else if(c1==c4)cout<<str1<<endl;
    else if(c2==c3)cout<<str2<<endl;
    else if(c2==c4)cout<<str2<<endl;
    else if(c3==c4)cout<<str3<<endl;


    return 0;
}