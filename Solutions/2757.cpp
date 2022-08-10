#include <iostream>
#include <math.h>

using namespace std;

int arr[1500];

int isprime(int n);
void createdata(void);

int main()
{

    long long n;
    int m=1;
    cin>>n;
    createdata();
    arr[0]=2;
    /*for(int i=0;i<200;i++)
    {
        cout<<i<<"\t"<<arr[i]<<endl;;
    }
    cout<<endl;*/
    //cout<<"start"<<endl;
    int counter=0;
    while(n!=1)
    {
        //cout<<counter<<endl;
        if(n%arr[counter]==0)
        {
            m*=arr[counter];
            while(n%arr[counter]==0)
            {
                n/=arr[counter];
            }
        }
        counter++;
        if(counter>1499)
        {
            m=n;
            break;
        }
    }

    cout<<m<<endl;
    return 0;
}

void createdata(void)
{
    int counter=1;
    long long num=2;
    while(counter<1500)
    {
       if(isprime(num))
       {
           arr[counter]=num;
           counter++;

       }

       num++;

    }
}
int isprime(int n)
{
    for(int i=2;i<sqrt(n)+1;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}