#include<stdio.h>
int main()
{
    int a[3][3], i, j,uppersum=0, lowersum=0;
    printf("Enter the element for the matrix.\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a [%d] [%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    //sum of upper and lower element
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i < j)
            {
                uppersum = uppersum + a[i] [j];
            }
            if(i > j)
            {
                lowersum = lowersum + a[i] [j];
            }
        }
    }
    printf("\nsum of upper triangle element = %d\n",uppersum);
    printf("\nsum of lower triangle element = %d\n",lowersum);

}

