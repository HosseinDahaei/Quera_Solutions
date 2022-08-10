#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int mini=-1;
    for(int a=1;a<10000;a++)
        for(int b=1;b<10000;b++)
            {

                int c=n/(a*b);
                if(a*b*c==n)
                {
                    int k=2*(a*b+a*c+b*c);
                    mini=min(k,mini);
                    if(mini==-1)
                        mini=k;
                }
            }
    cout<<mini<<endl;
}