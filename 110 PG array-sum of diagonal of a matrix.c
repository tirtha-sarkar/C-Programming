#include<stdio.h>
int main()
{
    int a[3][3], i, j,row, col,sum=0;
    printf("Enter the element for the matrix.\n");
    //scanf("%d %d",&row,&col);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a [%d] [%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTranspose matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
 printf("\n");

        }
  //sum of diagonal element
  printf("diagonal element : ");
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          if(i == j)
          {
              printf("%d ", a[i] [j]);
              sum = sum + a[i] [j];
          }

      }
  }
     printf("\nsum of diagonal element = %d\n",sum);

    }


