#include <iostream>

using namespace std;

int main()
{
   int a,b,l;
   cin>>a>>b>>l;
    int sum=0;
    int i=0;
    while(i<l)
    {
    if(i%2==0) sum+=a;
    else sum+=b;
    i++;
    }
    cout <<sum << endl;
    return 0;
}