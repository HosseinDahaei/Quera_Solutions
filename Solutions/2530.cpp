#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0,d=0,l=0,f=0;
    char str[20];
    for(int i=0;i<20;i++) str[i]=' ';
    cin>>str;
    for(int i=0;i<20;i++)
    {
        if(str[i]=='T') t++;
        else if(str[i]=='D')d++;
        else if(str[i]=='L')l++;
        else if(str[i]=='F')f++;
    }
    int result=1;
    result*=round(pow(2,t));
    result*=round(pow(2,d));
    result*=round(pow(2,l));
    result*=round(pow(2,f));
    cout << result << endl;
    return 0;
}