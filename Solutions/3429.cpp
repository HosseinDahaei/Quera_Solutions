#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>100) cout<<"Steam"<<endl;
    else if(n<0) cout<<"Ice"<<endl;
    else cout<<"Water"<<endl;

    return 0;
}