/*Enter N = 3
* * *
*   *
* * *
*/
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n || col==1 || col==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
/*
Enter N =5
*
* *
*   *
*     *
* * * * *
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(col==1 || row==n || row==col)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
*/
