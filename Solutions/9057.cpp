#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        //cout<<"q="<<q<<endl;
        int k,s;
        scanf("%d%d",&s,&k);
        long long sum=0;
        for(int j=s;j<=n;j+=k){
            sum+=a[j];
        }
        printf("%ld\n",sum);
    }
 return 0;
}