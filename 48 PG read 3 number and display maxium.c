//write a program that read 3 number and display maximum
#include<stdio.h>
int main()

{
    int num1,num2,num3;
    printf("Enter Three Number =");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    printf("Large Number =%d\n",num1);

    else if (num2>num1 && num2>num3)
        printf("Large Number =%d\n",num2);
    else if (num3>num1 && num3>num2)
        printf("Large Number =d\n",num3);

else
    printf("Number is Equal");
return 0;



}


/*#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    printf("Enter Three number =");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3)
        printf("Large number = %d\n",num1);

    else if (num2>num1 && num2>num3)
        printf("Large number = %d\n",num2);

    else if (num3>num1 && num3>num2)
        printf("Large number = %d\n",num3);

        else
            printf("Number are equal");
        return 0;


}
*/

