/*
#include<stdio.h>
int main()
{
    int array1[5] = {10, 12, 13, 34, 34} , array2[5], i;
    printf("array1 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }
    printf("\narray2 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
}
getch ();
}

02. User (scanf)
*/
#include<stdio.h>
int main()
{
    int array1[30], array2[30], i,n;

    printf("How many number =");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }



    printf("array1 : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }
    printf("\narray2 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
}
getch ();
}
