#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    int counter=0;
    while(m)
    {
        m/=10;
        counter++;
    }
    int arr[counter];
    for(int i=counter-1;i>=0;i--)
    {
        arr[i]=n%10;
        n/=10;
    }

    if(next_permutation(arr,arr+counter))
    {
        for(int i=0;i<counter;i++)
            cout<<arr[i];
        cout<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}