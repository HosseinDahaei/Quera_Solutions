#include <stdio.h>
#include<string.h>


int isPrime(int n)
{
    if(n==1) return 0;
    int i=2;
    for (i=2;i<n/2+1;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{

    int i,f,number;
    long long int n;
    scanf("%lld",&n);
    if (isPrime(n))
    {
        printf("%d",n);
        return 0;
    }
    i=2;
    f=1;
    while(i<n+1)
    {
        number=0;
        while(n%i==0)
        {
            number++;
            n/=i;
        }
        if(number!=0 && f!=1 && number!=1)
            printf("*%d^%d",i,number);
        if(number!=0 && f!=1 && number==1)
            printf("*%d",i);
        if(number!=0 && f==1 && number!=1)
        {
         printf("%d^%d",i,number);
         f=0;
        }

        if(number!=0 && f==1 && number==1)
        {
        printf("%d",i);
        f=0;
        }

        i+=1;
    }

}