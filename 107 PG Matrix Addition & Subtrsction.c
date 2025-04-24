#include<stdio.h>
int main()
{
    int i, j , numberOfRows, numberOfcols;
    int A[10][10],B[10][10], C[10][10];
    printf("Enter the number of row and col : ");
    scanf("%d %d",&numberOfRows, &numberOfcols);

     //A scanf  (Scanning A Matrix)
    printf("Enter element for a matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfcols; j++)
    {
        printf("A[%d] [%d] = ",i,j);
        scanf("%d",&A[i] [j] );
    }printf("\n");
    }
   //B scanf ((Scanning B Matrix)
    printf("\nEnter element for a matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfcols; j++)
    {
        printf("B[%d] [%d] = ",i,j);
        scanf("%d",&B[i] [j] );
    }printf("\n");

    }
    //A printf
    printf("A = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfcols; j++)
        {
            printf("%d ",A[i] [j] );

        } printf("\n");
    }
  // B printf
    printf("\nB = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfcols; j++)
        {
            printf("%d ",B[i] [j] );

        } printf("\n");
    }
    //Adding the matrix
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfcols; j++)
        {
            C[i] [j] = A[i] [j] + B[i] [j];
        }
}
//C printf +
printf("\nA + B = ");
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfcols; j++)
        {
            printf("%d ",C[i] [j] );

        } printf("\n");
        printf("\t");
    }
     //Adding - the matrix
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfcols; j++)
        {
            C[i] [j] = A[i] [j] - B[i] [j];
        }
    //Matrix printf -
    printf("\nA - B = ");
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfcols; j++)
        {
            printf("%d ",C[i] [j] );

        } printf("\n");
        printf("\t");
    }
}

}
