#include<stdio.h>

void display(int x[])

{
    int i;
    for(i=0 ; i<4; i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int num[]={10,20,30,40};
    display (num);

}
