#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[10000];
    cin>>str;
    int k=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(i<strlen(str)-1 && str[i]==str[i+1])
        {
            k++;
        }
        else
        {
            k++;
            if(k%2==1)
            {
                cout<<"bad"<<endl;
                return 1;
            }
            k=0;
        }
    }
    cout << "khoob" << endl;
    return 0;
}