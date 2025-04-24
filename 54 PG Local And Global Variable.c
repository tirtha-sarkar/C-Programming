#include<stdio.h>
int a=10;
int main()
{
    printf("Inside The Main Function a = %d\n ",a);
    display() ;
}

    void display()
{
    printf("Inside The Display Function a =%d\n",a);
    return 0;
}
