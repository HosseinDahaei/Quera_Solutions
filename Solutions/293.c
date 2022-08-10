#include <stdio.h>
#include <stdlib.h>

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
    int n ,t,i;
    scanf("%d",&n);
    scanf("%d",&t);

    for(i=n;i<=t;i++)
    {
       // printf("%d\n",i);
        if(isPrime(i))
            printf("%d\n",i);
    }

    return 0;
}