#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string str;

int func(string alaki)
{
  int index=0;
  for(auto u:alaki)
  {
    if(u==str[index])
    {
      index++;
      if(index==str.size())return 1;
    }
  }
  return 0;
}

int main()
{
    cin>>str;
    int n;
    cin>>n;
    string alaki;
    int res=0;
    for(int i=0;i<n;i++)
    {
      cin>>alaki;
      res+=func(alaki);
    }
    cout<<res<<endl;
    return 0;
}