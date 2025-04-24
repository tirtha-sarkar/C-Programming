// 1 + 2  + 3 + ..... + N - For Loop
#include<stdio.h>
int main()
{
    int n, sum=0,i;
    printf("Enter The Last Number =");
    scanf("%d",&n);
    printf("1 + 2 + 3 + ....... + %d",n);

    for (i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    printf("= %d\n",sum);

    getch ();
}

/*#include<stdio.h>
int main()
{
    int n, sum=0,i;
    printf("Enter The last Number=");
    scanf("%d",&n);
    printf("1 + 3 + 5 + ....... %d",n);

    for (i =1 ; i<=n; i=i+2)
    {
        sum = sum + i;
    }
    printf("= %d",sum);
}
*/
