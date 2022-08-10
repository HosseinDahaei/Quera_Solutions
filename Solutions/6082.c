#include <stdio.h>

int main()
{
    int n,m,i,j,p=0;
    char a;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%1c",&a);
            //printf("i get <%c>\n",a);
            if(a=='\n') j--;
            if(a=='*') p++;
        }

    }
    printf("%d",p);
    return 0;
}