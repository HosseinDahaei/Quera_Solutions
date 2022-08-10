#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i=0;
    int counter=1;
    i=k;
    i%=n;
    while(i!=0)
    {
        counter++;
        i+=k;
        i%=n;
    }
    cout<<counter<<endl;
    return 0;
}