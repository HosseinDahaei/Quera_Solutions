#include <bits/stdc++.h>

using namespace std;

int arr[10000];

int main()
{
    int n,k;
    cin>>n>>k;
    int maxi=-1;
    int mini=10000;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(maxi<arr[i]) maxi=arr[i];
        if(mini>arr[i]) mini=arr[i];
    }
    if(k==1)
    {
        cout<<maxi<<endl;
        return 0;
    }
    if(k==2)
    {
        int maxx=0;
        int minn=10000;
        for(int i=1;i<=n;i++)
        {
            if(maxx<arr[i]) maxx=arr[i];
            minn=min(minn,maxx);
        }
        maxx=0;
        for(int i=n;i>=1;i--)
        {
            if(maxx<arr[i]) maxx=arr[i];
            minn=min(minn,maxx);
        }
        cout<<minn<<endl;

    }
    if(k>2)
    {
        cout<<mini<<endl;
        return 0;
    }

    return 0;
}