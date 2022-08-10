#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
      for(int j=1;j<n+1;j++)
      {
          cout<<i*j<<" ";
      }
        cout<<endl;
    }
    return 0;
}