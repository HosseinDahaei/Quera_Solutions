#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>9)
    {
     int sum=0;
     while(n>0)
     {
         sum = sum+n%10;
         n = n/10;
     }
     n=sum;
    }
    cout<<n<<endl;
    return 0;
}