#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];

    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);

    size_t len = strlen(name);
    if(name[len - 1]= '\n')
        {
        name[len - 1] = '\0';
    }
    printf("Hello ");
    puts(name);

}
