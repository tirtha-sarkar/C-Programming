#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number=");
    scanf("%d",&num);

    if (num%2==0)
        printf("This Number = Even");
    else
        printf("This Number = Odd");
    return 0;
}
