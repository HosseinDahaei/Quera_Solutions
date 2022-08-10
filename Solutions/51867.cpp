#include <bits/stdc++.h>

using namespace std;

int arr[1010][1010];
int brr[1010][1010];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int j=m;j>=1;j--)
    {
        if(arr[n][j])
        {
            brr[n][j]=arr[n][j]+brr[n][j+1];
        }
    }
    int turn=0;
    for(int i=n-2;i>=1;i-=2)
    {
        for(int j=m;j>=1;j--)
        {
            if(arr[i][j])
            {
                if(turn%2==0)/// left
                {
                    if(max(brr[i][j+1],brr[i+2][j+1])>0)
                        brr[i][j]=arr[i][j]+max(brr[i][j+1],brr[i+2][j+1]);
                }
                else
                {
                    if(max(brr[i][j+1],brr[i+2][j-1])>0)
                        brr[i][j]=arr[i][j]+max(brr[i][j+1],brr[i+2][j-1]);
                }
            }
        }
        turn++;
    }






    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<brr[i][j]<<"\t";
        cout<<endl;
    }*/
    int maxi=-1;
    //for(int i=1;i<=n;i+=2)
        for(int j=1;j<=m;j++)
            maxi=max(maxi,brr[1][j]);
    cout<<maxi<<endl;

    return 0;
}