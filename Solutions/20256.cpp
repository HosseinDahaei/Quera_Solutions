#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g=0;
    int r=0;
    int y=0;
    for(int i=0;i<5;i++)
    {
        char s;
        scanf("%c",&s);
        if(s=='G') g++;
        if(s=='Y') y++;
        if(s=='R') r++;
    }
    if(g==0 || r>=3 || (y>=2 && r>=2) )
        cout<<"nakhor lite"<<endl;
    else
        cout<<"rahat baash"<<endl;
    return 0;
}