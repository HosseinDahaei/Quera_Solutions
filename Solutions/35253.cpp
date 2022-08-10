#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int maxi=-1;
    int index=0;
    for(int i=1;i<n;i++)
    {
        int k;
        cin>>k;
        if(k>maxi)
        {
            maxi=k;
            index=i;
        }
    }
    cout<<index<<endl;
    return 0;
}