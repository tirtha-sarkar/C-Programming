#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your markes =");
    scanf("%f",&marks);

    if (marks>=80)
        printf("A+");

    else if (marks>=70)
        printf("A");

    else if (marks>=60)
        printf("A-");
    else if(marks>50)
        printf("B");
    else if (marks>40)
        printf("C");
    else if (marks>33)
        printf("D");

    else
        printf("Not result Show");

    return 0;
}
