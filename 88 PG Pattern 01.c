/*
1.
1
1 2
1 2 3
1 2 3 4
*/
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);

        }
        printf("\n");
    }
    return 0;
}
/*
2.

1
1 1
2 2 2
3 3 3 3

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)

    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }

    printf("\n");
    }

}

3.

1
1 0
1 0 1
1 0 1 0

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col % 2);

        }
        printf("\n");
    }
    return 0;
}
4.

1
0 0
1 1 1
0 0 0 0

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)

    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row % 2);
        }

    printf("\n");
    }

}
5.
A
A B
A B C
A B C D
Capital = 64
small = 96

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)

    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col + 64);
        }

    printf("\n");
    }

}
6.
A
A A
B B B
B B B B

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)

    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",row + 64);
        }

    printf("\n");
    }

    }

7.
*
* *
* * *
* * * *

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)

    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }

    printf("\n");
    }

    }

8.
#
#  #
# # #

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n; row++)

    {
        for(col=1; col<=row; col++)
        {
            printf("# ");
        }

    printf("\n");
    }

    }
*/
