#include <stdio.h>
#include <stdlib.h>

int func(int n) // this function cheek a number  if is prime return 1 else return 0
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
    // get numbers
    scanf("%d",&n);
    scanf("%d",&t);
    int k=1;
    for(i=n+1;i<t;i++) // loop for calculate numbers between n and t
    {
        if(func(i))
        {
            if(k==0) printf(",");
            printf("%d",i);
            k=0;
        }

    }

    return 0;
}