#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int arr[1000005];
set<int> av;
int main()
{
    int k;
    long long n;
    scanf("%d%lld",&k,&n);
    queue<int> data;
    set<int>::iterator it=av.begin();

    int a;
    for(int i=0;i<k;i++)
    {

        scanf("%d",&a);
        data.push(a);
        //av.erase(a);
        if(a<1000005) arr[a]++;
    }
    for(int i=1;i<1000005;i++)
    {
        if(arr[i]==0)
            av.insert(i);

    }
    int brr[k+1];

    for(int i=0;i<k;i++)
    {
        int f=-1;

        f=(int)*av.begin();
        data.push(f);
        av.erase(f);
        arr[f]++;
        //cout<<"i add "<<f<<endl;
        if(data.front()<1000005)
        {
            arr[data.front()]--;
            if(arr[data.front()]==0) av.insert(data.front());
        }
        //cout<<"i pop "<<data.front()<<endl;
        data.pop();
        brr[i]=f;

    }
    int f=-1;
    f=(int)*av.begin();
    data.push(f);
    arr[f]++;
    brr[k]=f;
    long long j=n-k-1;
    j=j%(k+1);
    cout<<brr[j]<<endl;
    /*for(int i=0;i<j-1;i++)
    {
        //cout<<data.front()<<" ";
        data.pop();
    }
    cout<<data.front()<<endl;*/
    return 0;

}