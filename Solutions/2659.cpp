#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char*str1;
    char*str2;
    str1=new char[n];
    str2=new char[n];
    cin>>str1;
    cin>>str2;
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(*(str1+i)!=*(str2+i)) result++;
    }
    cout<<result<<endl;
    return 0;
}