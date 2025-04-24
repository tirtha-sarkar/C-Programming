#include<stdio.h>
int square(int a)
{
    printf("Square is = %d\n",a*a);
}

int main()
{
    int num;
    printf("Enter any interger number : ");
    scanf("%d",&num);

    square(num);
}
