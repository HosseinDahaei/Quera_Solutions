#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int func(int x,int y);

int main()
{
    int*arr;
    int n;
    cin>>n;
    arr=new int [n];
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        *(arr+i)=func(x,y);
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<endl;
    }

    return 0;
}

int func(int x,int y)
{
    if(x%2!=y%2) return -1;
    if(fabs(x-y)>2) return -1;
    if(x%2==0)
    {
        return x+y;
    }
    else  return x+y-1;
}