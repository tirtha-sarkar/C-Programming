#include<stdio.h>
int main()
{
    int i=1;
    tirtha:
        printf("%d\t",i);
        i++;

        if(i<20)
            goto tirtha;

                return 0;
}
