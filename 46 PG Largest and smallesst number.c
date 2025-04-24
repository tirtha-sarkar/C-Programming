#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Two Number=");
    scanf("%d %d",&num1,&num2);

    if (num1>num2)
        printf("%d\n",num1);
    else if(num2>num1)
    printf("%d\n",num2);

    else
        printf("Equal");
    return 0;
}
