//Write a program that calculate area of a triangle

#include<stdio.h>
int main()
{
    float base,height,area;

    printf(" Enter the base value=");
    scanf("%f",&base);

    printf(" Enter the height value=");
    scanf("%f",&height);

    area = (float)1/2 * base * height;

    printf("Area Value=%.2f\n",area);
    return 0;

}
