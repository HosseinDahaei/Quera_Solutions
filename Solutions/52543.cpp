#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(true)
    {
        if(i>j)break;
        cout<<arr[j]<<" ";
        j--;
        if(i>j)break;
        cout<<arr[i]<<" ";
        i++;
        if(i>j)break;

    }
    cout<<endl;
    return 0;
}