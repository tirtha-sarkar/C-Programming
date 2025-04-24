//1 +  1/2  + 1/3 + ...  +/n
#include<stdio.h>
int main ()
{
    double sum = 0, n, i;
    printf("Enter n =");
    scanf("%lf",&n);


     for (i=1; i<=n; i++)
     {
         sum = sum + (1/i);
         if (i==1)
            printf("\n1 + ");
         else if (i ==n)
            printf("(1/%.2lf) + " , i);
         else
            printf("(1/%.2lf) + ",i);

     }
     printf("= %.2lf\n",sum);
     return 0;
}
