#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[300005];
int sum=0;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    sum=m;
    vector<int> input[k];
    vector<int> output[k];
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        arr[a]=1;

    }
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=0;j<a;j++)
        {
            int c;
            cin>>c;
            input[i].push_back(c);
        }
        for(int j=0;j<b;j++)
        {
            int c;
            cin>>c;
            output[i].push_back(c);
        }

    }
    bool change=true;
    while(change)
    {
        //cout<<" in while"<<endl;
        change=false;
        for(int i=0;i<k;i++)
        {
            bool ok=true;
            for(int j=0;j<input[i].size();j++)
            {
                if(arr[input[i][j]]==0) ok=false;
            }
            if(ok)
            {
                for(int j=0;j<output[i].size();j++)
                {
                    if(arr[output[i][j]]==0)
                    {
                        change=true;
                        arr[output[i][j]]=1;
                        sum++;
                    }
                }
            }

        }

    }
    cout<<sum<<endl;
    for(int i=0;i<300005;i++)
    {
    if(arr[i]) cout<<i<<" ";
    }
    cout<<endl;
 return 0;
}