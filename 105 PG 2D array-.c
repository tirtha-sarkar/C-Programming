/*#include<stdio.h>
int main()
{
    int i, j;
    int A[3][4] = {{2,4,3,6}, {4,4,2,1}, {1,1,2,4,3}};

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
*/
#include<stdio.h>
int main()
{
    int i, j;
    int A[3][4] ;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

