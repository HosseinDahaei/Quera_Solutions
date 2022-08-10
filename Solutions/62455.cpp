#include<iostream>
#include <algorithm>
using namespace std;

int bs(int arr[],int first,int last,int key)
{
  //cout<<first<<" "<<last<<" "<<key<<endl;
  if(key>arr[last])return -1;
  if(first==last)
  {
    if(arr[first]>=key)return first;
    else return -1;
  }
  if(first+1==last)
  {
    if(arr[first]>=key)return first;
    else return bs(arr,first+1,last,key);
  }
  int mid=(first+last)/2;
  if(arr[mid]>=key)
  {
    return bs(arr,first,mid,key);
  }
  else
    return bs(arr,mid,last,key);

}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int brr[n];
    fill(brr,brr+n,1);
    int tekrar=0;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i+1]==arr[i])tekrar++;
        else tekrar=0;
        brr[i]=tekrar+1;
    }
/*
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<brr[i]<<" ";
    }
*/
    int maxi=arr[n-1];
    for(int i=0;i<n;i+=brr[i])
    {
      for(int j=1;j<=maxi/arr[i];j++)
      {
        int res=bs(arr,0,n-1,j*arr[i]);
        if(res>=0)
        {
          sum+=(n-res)*brr[i];
          //scout<<n-res<<endl;
        }
        else
          break;
      }
    }
    cout<<sum<<endl;
    return 0;

}