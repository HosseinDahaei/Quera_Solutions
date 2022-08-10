#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    if(c>10)
    {
        cout<<"Left "<<10-r+1<<" "<<20-c+1<<endl;
    }
    else
    {
        cout<<"Right "<<10-r+1<<" "<<c<<endl;
    }

    return 0;

}