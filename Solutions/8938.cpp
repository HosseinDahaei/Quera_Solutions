#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n;
   cin>>m;
   int arr[n][n];
   int i,j;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }
    int sum=0;
    int k1,k2;
    for(i=0;i<m;i++)
    {
      cin>>k1;
      cin>>k2;
      sum+=arr[k1-1][k2-1];

    }



    cout << sum << endl;
    return 0;
}