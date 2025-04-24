#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to celsius\n");
    printf("2. Celsius To Fahrenhit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter The Fahrenheit Temperature :");
            scanf("%f",&temp);
            convertedtemp = (temp-32/1.8);
            printf("The temperature in Celsius is : %f\n",convertedtemp);
            break;
        }
    case 2:
        {
            printf("Enter The Celsius Temperature :");
            scanf("%f",&temp);
            convertedtemp = (1.8*temp)+32;
            printf("The temperature in Farhrenheit is : %f\n",convertedtemp);
        }
    default:
        printf("Not a Correct option");

    }


