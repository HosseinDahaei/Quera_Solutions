#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n =str.size();
    long long  total1=0;
    long long total0=0;
    for(int i=0;i<n;i++)
        if(str[i]=='1')
            total1++;
        else
            total0++;
    long long found1=0;
    long long found0=0;
    //cout<<total0<<" "<<total1<<endl;
    //int one[n];
    //int zero[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            long long  r=(total0-found0);
            if(r>1)
            {
                sum+=(found1*(r*(r-1))/2)%1000000007;
                sum%=1000000007;
            }

            found1++;
        }
        else
        {
            if(found1>2)
            {
               sum+=((found1*(found1-1)*(found1-2))/6)%1000000007;
               sum%=1000000007;
            }
            found0++;
        }
        //cout<<i<<" "<<sum<<endl;
    }
    cout<<sum<<endl;
 return 0;
}