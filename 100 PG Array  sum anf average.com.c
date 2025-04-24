//1. Write a program that read 10 number and dispaly thier sum and average
#include<stdio.h>
int main()
{
    int a[3],sum=0,i;
    a[0]= 10;
    a[1]=20;
    a[2]=30;

    for(i=0; i<3; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f\n",(float)sum/3);
}
/*
2 . sacnf value:

  int a[3],sum=0,i;

  printf("Enter 5 Numbers = ");

  for(i=0; i<3; i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0; i<3; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f\n",(float)sum/3);

3. user dicide n number:
int a[100], sum=0, i,n;
printf("How many numbers = ");
scanf("%d",&n);

for(i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}

 for(i=0; i<n; i++)
 {
    sum = sum + a[i];
 }
 printf("The sum is : %d\n",sum);
    printf("The average is : %.2f\n",(float)sum/n);
}
*/

