#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2) cout<<"Vertical"<<endl;
    else if(y1==y2)cout<<"Horizontal"<<endl;
    else cout<<"Try again"<<endl;



    return 0;
}