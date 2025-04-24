#include<stdio.h>
double trianglearea(double b, double h);

int main()
{
    double base, height;
    printf("Enter base = ");
    scanf("%lf", &base);

printf("Enter height = ");
scanf("%lf",&height);

double area = trianglearea(base , height);

printf("Area = %.lf\n",area);

}
double trianglearea(double b, double h)
{
    return 0.5 * b * h;
}
