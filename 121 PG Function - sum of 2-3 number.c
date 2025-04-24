#include<stdio.h>

void sum (int a, int b, int c)
{
    printf("The sum is : %d\n", a+b+c);
}
void sub (int a, int b)
{
    printf("The subtrction = %d\n",a-b);
}

int main()
{
    sum(20,10,10);
    sub(25,5);
}
