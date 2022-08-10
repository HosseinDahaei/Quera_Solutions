#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int brr[]={0,0,0,0};
    int i=0;
    int j=0;
    while(arr[j]>0)
    {
        brr[i]++;
        arr[j]--;
        if(arr[j]==0) break;
        i+=1;
        j+=2;
        j%=4;
        i%=4;
    }
    cout<<brr[0]<<" "<<brr[1]<<" "<<brr[2]<<" "<<brr[3]<<endl;
    return 0;
}