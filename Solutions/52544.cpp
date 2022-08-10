#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int arr[9][9];

    char c;
    for(int i=0;i<9;i++)
    {
      for(int j=0;j<9;j++)
      {

        scanf("%c",&c);
        arr[i][j]=c-'0';
      }
      scanf("%c",&c);
    }
    int brr[9][9]={
      {1,1,1,2,2,2,1,1,1},
      {1,0,1,2,2,2,1,0,1},
      {1,1,1,2,2,2,1,1,1},
      {2,2,2,2,2,2,2,2,2},
      {2,2,2,2,2,2,2,2,2},
      {2,2,2,2,2,2,2,2,2},
      {1,1,1,2,2,2,1,1,1},
      {1,0,1,2,2,2,1,0,1},
      {1,1,1,2,2,2,1,1,1}

  };
  int counter = 0;
  for(int i=0;i<9;i++)
  {
    for(int j=0;j<9;j++)
    {
      if(brr[i][j]!=2 && arr[i][j]!=2 && arr[i][j]!=brr[i][j])
        {
          cout<<0<<endl;
          return 0;
        }
      if(brr[i][j]==2 && arr[i][j]==2)
        counter++;

    }
  }
    long long res=1;
    for(int i=0;i<counter;i++)
      res*=2;
    cout<<res<<endl;

    return 0;
}