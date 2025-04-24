#include<stdio.h>
void modifyvalue(int *ptr)
{
    *ptr = 20;

}
int main()
{
    int num = 10;
    printf("Before Modification : %d\n", num);
    modifyvalue(&num);
    printf("After Modification : %d\n", num);
}
