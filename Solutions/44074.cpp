#include <bits/stdc++.h>

using namespace std;

struct stock
{
    int cost;
    int epi;
    double rate;
};

bool cmp(struct stock a,struct stock b)
{
    return a.rate>b.rate;
}

int main()
{
    int n;
    int m;
    //long long a=100000000000000;
    //cout<<a<<endl;
    cin>>n>>m;
    struct stock data[n];
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&b,&a);
        data[i].cost=a;
        data[i].epi=b;
        data[i].rate=(double)b/a;
    }
    sort(data,data+n,cmp);
    /*for(int i=0;i<n;i++)
    {
        cout<<data[i].cost<<" "<<data[i].epi<<" "<<data[i].rate<<endl;
    }*/
    long long miniday=-1;
    long long get=m;
    long long  perday=0;
    for(int i=0;i<n;i++)
    {
        get+=data[i].cost;
        perday+=data[i].epi;
        long long now=get/perday ;
        if( get%perday>0) now++;
        if(miniday==-1 || miniday>now) miniday=now;
    }
    cout<<miniday<<endl;
    return 0;
}