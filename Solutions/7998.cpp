#include <iostream>
#include<string.h>
#include <stdio.h>
#include<cstring>
#include<ctype.h>
#include<wctype.h>
using namespace std;

int main()
{


    int n;
    cin>>n;
    char komaki[10];
    for(int i=0;i<10;i++) komaki[i]=' ';
    int capslk=0;
    char c;
    string str;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++) komaki[j]=' ';
        cin>>komaki;
        if(strcmp(komaki,"CAPS")==0)
        {
           // cout<<"--------"<<endl;
            capslk++;
            capslk=capslk%2;
        }
        else
        {
            if(capslk)
            {
            c=komaki[0];
            str=str+(char)towupper(c);
            //str=str+strupr(komaki);
            }
            else
            {
                str=str+komaki;
            }
        }

    }
    cout << str << endl;
    return 0;
}