#include <iostream>

using namespace std;
void turn(int *n);

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    turn(&n1);
    turn(&n2);
    //cout<<n1<<n2<<endl;
    if(n1>n2)
    {
        turn(&n1);
        turn(&n2);
        cout<<n2<<" < "<<n1<<endl;
    }
    else if(n1<n2)
    {
         turn(&n1);
            turn(&n2);
         cout<<n1<<" < "<<n2<<endl;
    }

    else{
        turn(&n1);
        turn(&n2);
        cout<<n1<<" = "<<n2<<endl;
    }


    return 0;
}

void turn(int *n)
{
    int r=0;
    int k=*n;
    r+=k%10;
    k/=10;
    r*=10;
    r+=k%10;
    k/=10;
    r*=10;
    r+=k%10;
    k/=10;
    *n=r;
}