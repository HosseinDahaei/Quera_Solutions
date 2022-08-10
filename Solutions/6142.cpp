#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r=0;
    int l=0;
    for(int i=0;i<m;i++)
    {
        char s;
        scanf("%c",&s);
        if(s=='\n')
        {
            i--;
            continue;
        }
        if(s=='R') r++;
        if(s=='L') l++;
    }
    int rmax[n];
    int lmax[n];
    lmax[0]=0;
    rmax[n-1]=0;
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i-1]);
        rmax[n-1-i]=max(rmax[n-1-i+1],arr[n-1-i+1]);

    }
    for(int i=0;i<n;i++)
    {
        if(lmax[i]<rmax[i])
        {
            if(lmax[i]>arr[i])
            {
                arr[i]+=min(lmax[i]-arr[i],l);
            }
            if(arr[i]<rmax[i])
            {
                arr[i]+=min(rmax[i]-arr[i],r);
            }
        }
        else
        {
            if(arr[i]<rmax[i])
            {
                arr[i]+=min(rmax[i]-arr[i],r);
            }
            if(lmax[i]>arr[i])
            {
                arr[i]+=min(lmax[i]-arr[i],l);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}