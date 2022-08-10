#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    cin>>str;
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=0;j<=i;j++)
        {
            str[j]=str[i];
        }
        cout<<str<<endl;
    }




    return 0;
}