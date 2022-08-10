#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> data;
    int n;
    cin>>n;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(data[a]==0)
            data[a]=1;
        else
            data[a]++;
        maxi=max(data[a],maxi);
    }
    cout<<maxi<<endl;
    return 0;
}