#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int myq[n];
    fill(myq,myq+n,0);
    vector<long long unsigned int> inputs;
    for(int i=0;i<q;i++)
    {
        int a;
        scanf("%d",&a);
        if(a==1)
        {
            int b;
            scanf("%d",&b);
            if(inputs.empty())
                inputs.push_back(b);
            else
                inputs.push_back(b+inputs[inputs.size()-1]);
        }
        else
        {
            int b,c;
            scanf("%d%d",&b,&c);
            if(c==0)
            {
                cout<<0<<endl;
                continue;
            }
            b--;
            long long unsigned res=0;
            /*for(int j=myq[b];j<c;j++)
            {
                res+=inputs[j];
            }*/
            if(myq[b]==0) res=inputs[c-1];
            else
            {
                res=(long long unsigned)inputs[c+myq[b]-1]-inputs[myq[b]-1];
            }
            myq[b]+=c;
            cout<<res<<endl;
        }
    }
 return 0;
}