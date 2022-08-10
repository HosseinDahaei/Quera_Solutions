#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int n;
    cin>>x>>n;
    if(n==0)
    {
        cout<<20<<endl;
    }
    else if(n==7)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<max(0,x-n)<<endl;
    }
    return 0;
}