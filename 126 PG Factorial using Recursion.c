#include<stdio.h>
int main()
{
    int result  = fact(4);
    printf("Factorial of 5 = %d",result);

}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n * fact (n-1);

}

