#include<stdio.h>
int main()
{
    int x=10;

    printf("%d\n",x++); //x=10
    printf("%d\n",x); //x=11
    printf("%d\n",++x); //x=12
    printf("%d\n",x); //x=12
    printf("%d\n",x--); //x=12
    printf("%d\n",--x); //x=10






    /*int x= 10;
    int y= --x;
    printf("x=%d\n",x);
    printf("y=%d\n",y);

    increment
    int x=10;
    int y = ++x;  //x++ ?++x= prefix increment and x++= postfix increment
    printf("x = %d\n",x);
    printf("y= %d\n",y);*/
    return 0;
}
