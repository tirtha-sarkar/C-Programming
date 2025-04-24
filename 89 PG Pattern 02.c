/*
1.
1 2 3 4
1 2 3
1 2
1

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=n; row>=1; row--)
   {
       for(col=1; col<=row; col++)
       {
           printf("%d ",col);
       }

  printf("\n");
   }
   }

   2.
3 3 3
2 2
1

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for (row=n; row>=1; row--)
   {
       for (col=1; col<=row; col++)
       {
           printf("%d ",row);
       }
       printf("\n");
   }
}

3.
1 0 1
1 0
1

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=n; row>=1; row--)
   {
       for(col=1; col<=row; col++)
       {
           printf("%d ",col % 2);
       }
       printf("\n");
   }
}
4.
0 0 0 0
1 1 1
0 0
1

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=n; row>=1; row--)
   {
       for(col=1; col<=row; col++)
       {
           printf("%d ",row % 2);
       }
       printf("\n");
   }
}
5.
A B C
A B
A

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=n; row>=1; row--)
   {
       for(col=1; col<=row; col++)
       {
           printf("%c ",col + 96); //Capial 64 and small = 96
       }
       printf("\n");
   }
}
7.
D D D D
C C C
B B
A

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=n; row>=1; row--)
   {
       for(col=1; col<=row; col++)
       {
           printf("%c ",row + 64); //Capial 64 and small = 96
       }
       printf("\n");
   }
}
7.
* * * *
* * *
* *
*
*/
#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=n; row>=1; row--)
   {
       for(col=1; col<=row; col++)
       {
           printf("* ");
       }
       printf("\n");
   }
}
