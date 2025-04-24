/*1.Enter N = 5
*       *
  *   *
    *
  *   *
*       *
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
            if(row==col || row+col==n+1)
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }
}
/*
2.Enter N = 3
1
2 3
4 5 6
#include<stdio.h>
int main()
{
    int n, row, col, count=0;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            printf("%d ",++count);
            printf("\n");
    }
}
3. Enter N =3
    1
  1 2 1
1 2 3 2 1
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf("  ");
        for(col=1; col<=row; col++)
        printf("%d ",col);
        for(col=row-1;col>=1; col--)
            printf("%d ",col);
        printf("\n");
}
}

4. Enter N =3
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf("  ");
        for(col=1; col<=row; col++)
        printf("%d ",col);
        for(col=row-1; col>=1; col--)
        printf("%d ",col);
        printf("\n");
    }

        for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            printf("  ");
        for(col=1; col<=row; col++)
        printf("%d ",col);
        for(col=row-1; col>=1; col--)
        printf("%d ",col);
        printf("\n");
    }
}
*/
