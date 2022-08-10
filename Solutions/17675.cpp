#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main()
{
    arr[1]=1;
    arr[2]=1;
    int i=1;
    int j=2;
    for(int k=3;k<=100;)
    {
        k=i+j;
        i=j;
        j=k;
        arr[k]=1;

    }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(arr[i])
            cout<<"+";
        else
            cout<<"-";
    }
    cout<<endl;
    return 0;
}