#include<stdio.h>
int main()
{
    int num, temp, r, sum =0;

    printf("Enter any Number =");
    scanf("%d",&num);

    temp   = num ;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
9356331642
    }
    if (num == sum)
    printf("Palindrom number\n");

    else
        printf("Not a Palindrom number");

}
