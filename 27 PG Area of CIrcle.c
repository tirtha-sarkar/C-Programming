#include<stdio.h>
#include<math.h>
int main ()
{
    float  radius , range , area ;  //PI=3.1416 ;

    printf("Enter Radius =");
    scanf("%f",&radius);

    range = 2 * M_PI * radius ;
    /*area = PI * radius * radius ;
    printf("Area of circle =%.2f\n",area); */

    printf("Circal of Range =%.2f\n ",range);

    return 0;
}
