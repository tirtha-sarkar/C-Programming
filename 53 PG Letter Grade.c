#include<stdio.h>
int main ()
{
    int mark;
    printf("Enter mark=");
    scanf("%d",&mark);

    if (mark>100 || mark<0)
        printf("Invalid mark");
    else if (mark>=80 && mark <=100)
        printf("Result=A+");
    else if (mark>=70 && mark <=79)
        printf("Result=A");
    else if (mark>=60 && mark <=69)
        printf("Result=A-");
    else if (mark>=50 && mark <=59)
        printf("Result=B");
    else if (mark>=40 && mark <=49)
        printf("Result=C");
    else if (mark>=33 && mark <=39)
        printf("Result=D");

    else
        printf("Result = F");

}
