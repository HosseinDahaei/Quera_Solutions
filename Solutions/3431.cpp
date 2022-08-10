#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int sub(string s,string t){
    int ans=0;
    int ind=0;
    if(s.find(t)<s.size()){
        return sub(s.substr(s.find(t)+1),t)+1;
    }
    else
        return 0;
}


int main()
{
    int n,m;
    cin>>n>>m;
    string s[n], t[m];
    string a(m,'1');
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<m; i++){
        t[i]=a;
        for(int j=0; j<n; j++){
            t[i][j]=s[j][i];
        }
    }
    string l;
    cin>>l;
    int res=0;
    for(int i=0;i<n;i++)
    {
        res+=sub(s[i],l);
    }
    for(int i=0;i<m;i++)
    {
        res+=sub(t[i],l);
    }
    //if(l.size()>1)
    cout<<res<<endl;
    /*else
        cout<<res/2<<endl;*/
    return 0;
}