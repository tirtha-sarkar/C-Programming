#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], i, j, k, row1, col1, row2,col2, sum = 0 ;

    printf("Enter rows and cols for first matrix =");
    scanf("%d %d",&row1,&col1);
    printf("Enter rows and cols for second matrix =");
    scanf("%d %d",&row2,&col2);

    /*while (col1 != row2)
    {
        printf("Error ! ! Collum of first matrix not equal to row of second");

        printf("Enter rows and cols for first matrix =");
        scanf("%d %d",&row1,&col1);

        printf("Enter rows and cols for second matrix =");
        scanf("%d %d",&row2,&col2);
    }*/
    //Taking input for First matrix
    printf("Enter element for first matrix\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("first[%d] [%d] =  ", i , j );
            scanf("%d",&first[i] [j]);
        }

    }
    //Taking input for second matrix
    printf("Enter element for second matrix\n");
    for(i=0; i<row2; i++)
    {

        for(j=0; j<col2; j++)
        {
            printf("second[%d] [%d] =  ",i , j );
            scanf("%d",&second[i] [j]);
        }

    }
    //multiplication matrix

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            for(k=0; k<col1; k++)
            {
               sum = first[i] [j] * second[k] [j] ;

            }
            result [i] [j] = sum;
            sum = 0;
        }

    }


  //printing first matrix
  printf("\n\nFirst Matrix\n");
  for(i=0; i<row1; i++)
  {
      for(j=0; j<col1; j++)

          printf("%d ",first[i] [j]);
          printf("\n");

  }
  //printing second matrix
  printf("\n\nSecond Matrix\n");
  for(i=0; i<row2; i++)
  {    printf("\t");
      for(j=0; j<col2; j++)
      printf("%d ",second[i] [j]);
          printf("\n");
  }
 //printing result matrix
  printf("\n\nResult Matrix\n");
  for(i=0; i<row1; i++)
  {    printf("\t");
      for(j=0; j<col2; j++)
          printf("%d ",result[i] [j]);
          printf("\n");

  }
}
