#include <stdio.h>

void cheeck(float bmi)
{
  if(bmi<18.5)
    printf("Underweight");
    else if (bmi<25)
        printf("Normal");
    else if(bmi<30)
        printf("Overweight");
    else
        printf("Obese");
}

int main()
{
    float n,m;
    scanf("%f %f",&n,&m);
    float bmi=n/(m*m);
    printf("%.2f\n",bmi);
    cheeck(bmi);
    return 0;
}