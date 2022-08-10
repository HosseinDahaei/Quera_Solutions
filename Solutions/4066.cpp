#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> data;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        data[a]=b;
    }
    for(int i=0;i<m;i++)
    {
        string a;
        cin>>a;
        if(data[a]!="")
            cout<<data[a]<<" kachal! ";
        else
            cout<<"kachal! ";
    }
    return 0;
}