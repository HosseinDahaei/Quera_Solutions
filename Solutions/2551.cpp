#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    char c;
    cin>>s>>c>>t;

    if(c=='+'){
        if(s.size()==t.size())
        {
            cout<<2;
            for(int i=1;i<t.size();i++)
            cout<<"0";
            return 0;
        }
        if(s.size()>t.size()){
            cout<<1;
            for(int i=1; i<s.size(); i++){
                if(i==s.size()-t.size()) cout<<1; else cout<<0;
            }
        } else {
            cout<<1;
            for(int i=1; i<t.size(); i++){
                if(i==t.size()-s.size()) cout<<1; else cout<<0;
            }
        }
    } else {
        cout<<1;
        string a(s.size()+t.size()-2, '0'); cout<<a;
    }
    return 0;
}