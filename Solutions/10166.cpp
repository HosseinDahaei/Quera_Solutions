#include <bits/stdc++.h>

using namespace std;

int key[6]={3,3,1,1,2,2};
int shir[4]={2,1,2,3};
int nez[3]={1,2,3};

int main()
{
    int n;
    cin>>n;
    int k=0;
    int s=0;
    int ne=0;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%1d",&a);
        if(a==key[i%6]) k++;
        if(a==shir[i%4]) s++;
        if(a==nez[i%3]) ne++;
    }
    int maxi=max(k,s);
    maxi=max(maxi,ne);
    set<string> res;
    if(k==maxi) res.insert("keyvoon");
    if(s==maxi) res.insert("shir farhad");
    if(ne==maxi) res.insert("nezam");
    cout<<maxi<<endl;
    for(set<string>::iterator it=res.begin();it!=res.end();it++)
    {
        cout<<(string)*it<<endl;
    }
    return 0;
}