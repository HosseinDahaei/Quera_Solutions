#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int i=1;
    while (true)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
          if(i%arr[j])flag=false;
        if(flag)
          break;
        i++;
    }

    cout<<(i+1)%30<<endl;
    return 0;

}