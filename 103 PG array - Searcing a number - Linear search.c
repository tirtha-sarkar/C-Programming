#include<stdio.h>
int main()
{
    int num [] = {10, 2,30,34,3};
    int value, position = -1, i ;
    printf("Enter the value you went to search : ");
    scanf("%d",&value);
    printf("\n");
    for(i=0; i<5; i++)
    {
        if(value == num[i])
        {
            position = i+1;
            break;
        }
    }
    if (position == -1)
    {
        printf("Not Found");
    }
    else {
        printf("The value id found at %d position\n",position);
    }

}
