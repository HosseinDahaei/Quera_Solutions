#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[100];
    int brr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i]*brr[i];
    }
    cout << sum<< endl;
    return 0;
}