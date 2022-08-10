#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int h1,h2,m1,m2;
    h1=0;m1=0;
    int k;
    k=6-a;
    //h2=a+2*k;
    h2=12-a;
    h2=h2%12;
    m2=60-b;
    m2=m2%60;
    if(h2<10)cout<<h1;
    cout<<h2<<":";
    if(m2<10)cout<<m1;
    cout<<m2<<endl;
    return 0;
}