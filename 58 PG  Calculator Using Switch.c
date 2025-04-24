#include<stdio.h>
int main()
{
    char op;
    double num1, num2;

    printf("Enter an Operator (+,-,*,/)=");
    scanf("%c",&op);
    printf("Enter Two Operant =");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
    {
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;
    }
    case '-':
    {
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;
    }
    case '*':
    {
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;
    }
    case '/':
    {
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
        break;
    }
    default:
        printf("Error! operator is not correct");
    }
    return 0;

}
