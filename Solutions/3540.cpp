#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    int xx,yy;
    cin>>n>>x>>y;
    for(int i=0;i<=n/x;i++)
    {
        if( (n-i*x)%y==0 )
        {
            cout<<i<<endl;
            cout<<(n-i*x)/y<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}