#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    /*shanbe
    1shanbe
    2shanbe
    3shanbe
    4shanbe
    5shanbe
    jome*/
    int k;
    char str[10];
    int shanbe=1,shanbe1=1,shanbe2=1,shanbe3=1,shanbe4=1,shanbe5=1,jome=1;
    for(int i=0;i<3;i++)
    {
        cin>>k;
        for(int i=0;i<k;i++)
        {
            cin>>str;
            if(strcmp(str,"shanbe")==0) shanbe=0;
            else if(strcmp(str,"1shanbe")==0) shanbe1=0;
            else if(strcmp(str,"2shanbe")==0) shanbe2=0;
            else if(strcmp(str,"3shanbe")==0) shanbe3=0;
            else if(strcmp(str,"4shanbe")==0) shanbe4=0;
            else if(strcmp(str,"5shanbe")==0) shanbe5=0;
            else if(strcmp(str,"jome")==0) jome=0;
        }
    }
    int counter=0;
    if(shanbe) counter++;
    if(shanbe1) counter++;
    if(shanbe2) counter++;
    if(shanbe3) counter++;
    if(shanbe4) counter++;
    if(shanbe5) counter++;
    if(jome) counter++;
    cout << counter<< endl;
    return 0;
}