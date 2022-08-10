#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    char c1;
    int k;
    do
    {
      scanf("%1c",&c1);
      //cout<<c1<<" ";
      if(c1=='\n') break;
      k=atoi(&c1);
      if(k>9)k/=10;
      arr.push_back(k);
    }while(c1!='\n');

    if(arr.size()==1)
    {
        if(arr[0]==1)
        {
            cout<<"1"<<endl;
            return 0;
        }
        if(arr[0]==2)
        {
            cout<<"2"<<endl;
            return 0;
        }
    }
    k=arr.size()-1;
    arr[k]--;
    if(arr[k]<0)
    {
        arr[k]=9;
        arr[k-1]--;
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

    return 0;
}