#include<stdio.h>
int main()
{
    while (1)
    {
    int i, fact =1, n;
    printf("Enter Any Positive Number =");
    scanf("%d",&n);

    for (i =1 ; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial Number = %d\n",fact);
    }
    return 0;

}
