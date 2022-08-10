#include <iostream>

using namespace std;

int main()
{
    long long reslut=0;
    int n;
    cin>>n;
    int k;
    long long result2=0;
    for(int i=0;i<n;i++)
    {
     cin>>k;

     reslut-=k;
     if(reslut<0)
     {
         result2-=reslut;
         reslut=0;
     }
    }
    /*if(reslut>0) reslut=0;
    else reslut*=-1;*/
    cout << result2 << endl;
    return 0;
}