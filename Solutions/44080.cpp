#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int counter=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+maxi<=x)
        {
            counter++;
            maxi=max(maxi,arr[i]);
        }
    }
    counter=max(1,counter);
    cout<<counter<<endl;
    return 0;
}