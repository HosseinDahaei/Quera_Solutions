#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>maxi) maxi=arr[i];
    }
    for(int i=0;i<n;i++)
        arr[i]=maxi-arr[i];

    long long res=0;
    int start=0;

    while(start<=n-1)
    {
        int mini=arr[start];
        int index=start;
        while(index<n-1)
        {
            if(arr[index+1]==0)
                break;

            index++;
            mini=min(mini,arr[index]);

        }
        for(int i=start;i<=index;i++)
            arr[i]-=mini;
        res+=mini;
        while(arr[start]==0 && start<=n-1)  start++;
    }
    cout<<res<<endl;

 return 0;
}