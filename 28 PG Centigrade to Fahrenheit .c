 // (c/5) = (F-32)/9 = (K-273/5)
//F = (c*1.8)+32
#include<stdio.h>
int main ()
{
    float c , F;
    printf("Enter Centrigrade =");
    scanf("%f",&c);

    F = ( c * 1.8 ) + 32;

    printf("Fahrenheit = %.2f\n",F);

    return 0;

}
