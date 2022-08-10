#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    vector<int> data;
    fill(arr,arr+n+1,0);
    for(int i=1;i<=n;i++)
    {
        char c;
        scanf("%1c",&c);
        if(c==' '||c=='\n')
        {
            i--;
            continue;
        }

        if(c=='H')
            arr[i]=1;
    }
    int s,t;
    cin>>s>>t;
    if(s>t)
        swap(s,t);
    bool flag=false;
    int counter=0;
    for(int i=s+1;i<=t;i++)
    {
        if(flag)
            counter++;
        if(arr[i]!=arr[i-1])
            {
                if(flag==false)
                {
                    counter=0;
                    flag=true;
                }
                else
                {
                    flag=false;
                    data.push_back(counter);
                }
            }
    }
    int result=0;
    for(int i=0;i<data.size();i++)
    {
        int k=data[i];
        while(k>0)
        {
            if(k%2==1)
                result++;
            k/=2;
        }
    }
    cout<<result<<endl;
    return 0;
}