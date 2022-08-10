#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w[3];
    for(int i=0;i<3;i++)
        cin>>w[i];
    int arr[3];
    int brr[3];
    for(int i=0;i<3;i++)
        cin>>arr[i]>>brr[i];
    int sum=0;
    for(int i=0;i<200;i++)
    {
        int num=0;
        for(int j=0;j<3;j++)
            if(arr[j]<=i && i<brr[j])
                num++;
        if(num==0) continue;
        sum+=(num)*w[num-1];
    }
    cout<<sum<<endl;
    return 0;
}