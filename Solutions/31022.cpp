#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> want;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        want.push_back(a);
    }
    sort(want.begin(),want.end());
    reverse(&want.front(),&want.front()+n);
    int result=0;
    while(want.size()>0)
    {
        result++;
        want[0]--;
        if(want.size()>1)
            want[1]--;
        if(want.size()>2)
            want[2]--;
        if(want.size()>3)
            want[3]--;



        if(want.size()>3)
            if(want[3]==0)
            want.erase(want.begin()+3);
        if(want.size()>2)
            if(want[2]==0)
            want.erase(want.begin()+2);
        if(want.size()>1)
            if(want[1]==0)
            want.erase(want.begin()+1);
        if(want[0]==0)
            want.erase(want.begin()+0);

    }
    cout<<result<<endl;

    return 0;
}