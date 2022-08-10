#include<stdio.h>

void show(int a)
{
  if(a<10)
    printf("%d",a);
  else
    printf("%c",(char)('A'+a-10) );
}

void func(int n,int b)
{
  //cout<<" call by "<<n<<" "<<b<<endl;
  if(n<b)
  {
   show(n);
   return;
  }
  func(n/b,b);
  show(n%b);

}

int main()
{
  int n;
  int b;
  scanf("%d%d",&n,&b);
  func(n,b);
  printf("\n");
  return 0;
}