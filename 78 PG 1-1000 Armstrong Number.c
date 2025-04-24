#include<stdio.h>
int main()
{
    int initialnum,finalnum, temp, r, sum=0, i;

    printf("Initial Value =");
    scanf("%d",&initialnum);

    printf("Final Value =");
    scanf("%d",&finalnum);

    for (i=initialnum; i<=finalnum; i++)
    {
        temp = i;
        while(temp !=0)
        {
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;

        }
        if (sum==i)
            printf("%d",i);

    }

    sum=0;
}

