#include <iostream>
#include<string.h>
using namespace std;

char str[1100];
void becharkhon(char *komaki);
int main()
{
    int n;
    cin>>n;
    int endo=0;;
    char komaki[10];
    for(int i=0;i<n;i++)
    {
        cin>>komaki;
        becharkhon(komaki);
        str[endo]=' ';
        strcat(str,komaki);
        endo=strlen(str);
    }
for(int i=strlen(str)-1;i>-1;i--)
{
    cout<<str[i];
}
    cout<<endl;
    return 0;
}
void becharkhon(char *komaki)
{
    char str2[10];
    int k=strlen(komaki);
    for(int i=0;i<strlen(komaki);i++)
    {
        str2[i]=*(komaki+i);
    }
    for(int i=strlen(str2)-1;i>-1;i--)
    {
        *(komaki+i)=str2[k-i-1];
    }
}