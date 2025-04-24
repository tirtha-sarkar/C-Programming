#include<stdio.h>
int main ()
{
    float lenght , width , area ;

    printf("Enter Length =");
    scanf("%f", & lenght);

    printf("Enter width =");
    scanf("%f", & width);

    area = lenght  * width;

    printf("Area of Rectangle = %.2f\n",area);

    return 0;

}
