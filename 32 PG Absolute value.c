#include<stdio.h>
int main()
{
    int x;

    printf("Enter any number=");
    scanf("%d",&x);
    int result = abs(x);

    printf("%d",result);

    /* or direct
    int result = abs (-45);
    printf("%d",result) */


    return 0;
}
