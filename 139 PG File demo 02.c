#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "Tirtha sakar";
    int lenght = strlen(name);
    int i;
    file =  fopen("test.tex","w");
    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {

        printf("File is opend\n");
        for(i=0; i<lenght; i++);
        {
            fputc(name[i],file);
        }
        printf("File is writen successfully\n");
        fclose(file);
    }
    getch();
}
