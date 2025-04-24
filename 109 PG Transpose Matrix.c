#include<stdio.h>
int main()
{
    int a[10][10],t[10][10], i, j, row, col;

    printf("Enter row and col number = ");
    scanf("%d %d",&row, &col);
    //input
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d] [%d] =",i,j);
            scanf("%d",&a[i] [j]);
        }

    }
    //print
    printf("\nEntered matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }
    //transpose
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            t[j][i] = a[i][j];
        }
    }
        ////print transpose
        printf("\nTranspose matrix\n");
        for(i=0; i<col; i++)
        {
            for(j=0; j<row; j++)
            {
                printf("%d ",t[i][j]);
            }
                printf("\n");
        }



}
