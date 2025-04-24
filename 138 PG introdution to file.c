#include<stdio.h>
int main()
{
    FILE *file;
    file =  fopen("test.tex","w");
    if(file == NULL)
    {
        printf("File does not exist");
    }


        else
        {
            printf("File is opend");
            fclose(file);
        }
    getch();
}
