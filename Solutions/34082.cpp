#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,k;
    cin>>n>>k;
    int counter=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        if(sum>k)
        {
            counter++;
            sum=a;
        }
        else if(sum==k)
        {
            sum=0;
            counter++;
        }

    }
    if(sum) counter++;
    cout<<counter<<endl;

}