#include<stdio.h>
int main()
{
    char a [12] = "Tirtha";
    char b[12]= "Dhiraj";
    char c[12];
    printf("Before swapping\n");
    printf("A = %s\n",a);
    printf("B = %s\n",b);

    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("\n");
    printf("After swapping\n");
    printf("A = %s\n",a);
    printf("B = %s\n",b);

}
