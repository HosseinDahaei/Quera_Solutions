#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    fill(arr,arr+n,0);
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        arr[a]++;
        arr[b]++;
    }
    int maxval=0;
    for(int i=0;i<n;i++)
    {
        maxval=max(maxval,arr[i]);
    }
    cout<<maxval<<endl;
    return 0;
}