#include <iostream>

using namespace std;

int main()
{
    int p,d;
    cin>>p>>d;
    int i=1;
    while(1)
    {
        if(  (i*d)%p<=p/2 ) break;
        i++;
    }

    cout << i*d << endl;
    return 0;
}