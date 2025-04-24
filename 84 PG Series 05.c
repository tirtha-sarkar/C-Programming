// 1^2 * 2^2 * 3^2 *.........*n^2 multiplication
#include<stdio.h>
int main()
{
    int n,i, mul;
    printf("Enter n =");
    scanf("%d",&n);
     printf("1^2 * 2^2 * 3^2 *.........*%d^2 ",n);
    for(i=1; i<=n; i++);
    {
        mul = mul * i * i;

    }
    printf("= %d",mul);
    return 0;
}



/*1*2*3*.........*n multiplication
#include<stdio.h>
int main()
{
    int n,i, mul;
    printf("Enter n =");
    scanf("%d",&n);
     printf("1 * 2 * 3 *.........* %d ",n);
    for(i=1; i<=n; i++);
    {
        mul = mul * i;

    }
    printf("= %d",mul);
    return 0;
}*/
