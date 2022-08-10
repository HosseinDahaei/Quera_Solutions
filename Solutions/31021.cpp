#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <string> names;
    for (int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        names.push_back(str);
    }
    //salamha
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>-1;j--)
        {
            cout<<names[i]<<": salam "<<names[j]<<"!"<<endl;
        }
    }
    // khodahafezha
    for(int i=0;i<n;i++)
    {
        cout<<names[i]<<": khodafez bacheha!"<<endl;
        for(int j=i+1;j<n;j++)
        {
            cout<<names[j]<<":  khodafez "<<names[i]<<"!"<<endl;
        }

    }
    return 0;
}