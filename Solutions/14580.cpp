#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,k;
    cin>>n>>x>>k;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    x--;
    cout<<str[(x+k)%n]<<endl;
    return 0;
}