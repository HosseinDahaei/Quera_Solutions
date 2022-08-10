#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    int k;
    cin>>k;
    while(k)
    {
        arr.push_back(k);
        cin>>k;
    }
    for(int i=arr.size()-1;i>-1;i--)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}