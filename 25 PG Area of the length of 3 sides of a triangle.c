#include<stdio.h>
int main()
{
    double a , b , c , s , area;
    printf("Enter 3 value=");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt( s * (s-a) * (s-b) * (s-c) );


    printf("Area of Triangle = %.2lf\n", area);
    return 0;

}
