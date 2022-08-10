#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int *arrn;
    int *brrn;
    int *arrm;
    int *brrm;
    cin>>n>>m;
    arrn=new int [n+1];
    brrn=new int [n+1];
    arrm=new int [m+1];
    brrm=new int [m+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>*(arrn+i);
        cin>>*(brrn+i);
    }
    for(int i=1;i<m+1;i++)
    {
        cin>>*(arrm+i);
        cin>>*(brrm+i);
    }
    /* for(int i=1;i<n+1;i++)
    {
        cout<<*(arrn+i)<<"  "<<*(brrn+i)<<endl;;
    }*/
    int result=0;
    int k1=0,k2=0;
    for(int i=1;i<31;i++)
    {
        k1=0;
        k2=0;
        for(int j=1;j<n+1;j++)
        {
            if(i<=*(brrn+j) && i>=*(arrn+j)) k1=1;
        }
        for(int j=1;j<m+1;j++)
        {
            if(i<=*(brrm+j) && i>=*(arrm+j)) k2=1;
        }
        if(k1 && k2) result++;
    }
    cout<<result<<endl;
    return 0;
}