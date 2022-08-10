#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> data;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        data.push_back(x);
    }
    long long int nowplace=n-1;
    long long int result=0;
    long long int index=-1;
    long long int maxi=0;
    while(nowplace>0)
    {
        int x;
        //cin>>x;
        //cout<<"now="<<nowplace<<endl;
        //nowplace=data.size()-1;
        index=-1;
        for(int i=nowplace-1;i>=0;i--)
        {
            if(data[nowplace]<=data[i])
            {
                index=i;
                break;
            }
        }
        if(index!=-1)/// we have a block and should calculate
        {
            //cout<<"block1 and index="<<index<<endl;
            long long int badsum=0;
            for(int i=index+1;i<nowplace;i++)
            {
                badsum+=data[i];
            }
            result+=(nowplace-index-1)*data[nowplace]-badsum;/// important
            //cout<<"badsum="<<badsum<<"  result="<<result<<endl;
            nowplace=index;
        }
        else
        {
            //cout<<"block2---->";
            maxi=0;
            for(int i=0;i<nowplace;i++)
            {
                if(data[i]>=maxi)
                {
                    maxi=data[i];
                    index=i;
                }
            }
            //cout<<"index="<<index<<endl;

            long long int badsum=0;
            for(int i=index+1;i<nowplace;i++)
            {
                badsum+=data[i];
            }
            result+=(nowplace-index-1)*data[index]-badsum;/// important
            //cout<<"result="<<result<<endl;
            nowplace=index;

        }

    }
    cout<<result<<endl;
    return 0;
}