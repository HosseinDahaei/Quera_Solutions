#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>3)a=1;
        for(int j=0;j<a;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}