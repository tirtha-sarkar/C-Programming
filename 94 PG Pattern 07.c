/*
A A A A A
B  B  B B B
C C C  C C
*/
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d",&n);

    for (row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
}
