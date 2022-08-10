#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    bool brr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            brr[i][j]=true;
        }
    }
    for(int i=0;i<n;i++)
    {
        brr[i][0]=brr[i][m-1]=false;
    }
    for(int i=0;i<m;i++)
    {
        brr[0][i]=brr[n-1][i]=false;
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if(arr[i][j]<arr[i][j+1] && arr[i][j]<arr[i][j-1] &&
               arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i-1][j])
                brr[i][j]=true;
            else if(arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i][j-1] &&
               arr[i][j]<arr[i+1][j] && arr[i][j]<arr[i-1][j])
               brr[i][j]=true;
            else
                brr[i][j]=false;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(brr[i][j]) sum++;
    }
    cout<<sum<<endl;
    return 0;
}