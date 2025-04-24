#include<stdio.h>
int main ()
{
    float F , C;
    printf("Enter Fahrenheit =");
    scanf("%f",&F);
    C = (F - 32)/1.8;

    printf("Centigrade Value = %.2f\n",C);
    return 0;

}
