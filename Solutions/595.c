#include<stdio.h>

long long int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}

int main()
{
    int n;// number of lines
    long long int m;
    scanf("%d",&n);//get number
    int i,j;
    for(i=0;i<n;i++) // loop for lines
    {
        for(j=0;j<i+1;j++) // loop for numbers of any line
        {
            // calculate the number
        m=fact(i);
        m=m/(fact(i-j)*fact(j));
        printf("%lld\t",m);// show number
        }
        printf("\n");// go to new line

    }



    return 0;
}