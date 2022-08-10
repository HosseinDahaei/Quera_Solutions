#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

void sorti(int*result,int n);

int main()
{
    int n;
    cin>>n;
    int*arr1;
    int *arr2;
    int*result;
    arr1=new int[n];
    arr2=new int[n];
    result=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>*(arr1+i);
    }
    for(int i=0;i<n;i++)
    {
        cin>>*(arr2+i);
    }
    for(int i=0;i<n;i++)
    {
        *(result+i)=-1;
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(*(arr2+i))
        {
            *(result+k)=*(arr1+i);
            k++;
        }
    }
    sort(result,result+n);
    //sorti(,n);
    for(int i=0;i<n;i++)
    {
        if(*(result+i)>0) cout<<*(result+i)<<" ";

    }
    return 0;
}
void sorti(int*result,int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(*(result+i)>*(result+i+1)) swap(*(result+i),*(result+i+1));
        }
    }

}