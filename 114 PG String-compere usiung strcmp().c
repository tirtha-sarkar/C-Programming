#include<stdio.h>
int main()
{
    char str1[] = "Tirtha";
    char str2[] = "Tirtha sarkar";
    int d =  strcmp(str1,str2);

    if(d==0)
    {
        printf("string are equal");
    }
    else
        printf("string are not equal");
    printf("\n");
}
