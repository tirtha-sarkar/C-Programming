#include<stdio.h>
struct book
{
    char name [20];
    int price;
};

int main()
{
     typedef struct book Book;

     Book b = {"amr ktha",350};

     printf("Book Name = %s\n",b.name);
     printf("Book price = %d\n",b.price);




     /*typedef char LETTER;
     LETTER ch;
    ch = 'A';
    printf("ch = %c\n",ch);
    */
}
