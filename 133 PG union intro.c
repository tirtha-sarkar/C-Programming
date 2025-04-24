/*#include<stdio.h>
union test
{
    int x,y;
};

int main()
{
    union test t1;
    t1.x=10;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

     t1.y=20;
    printf("\nt1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

                      ******size of union***
}
*/
#include<stdio.h>
union test1
{
    int x,y;
};
union test2
{
    char ch;
    int x;
};
union test3
{
    char name[20];
    double d;
};

struct test4
{
    int x;
    int y;
    char ch[20];
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

  printf("sizeof(t1) = %d\n",sizeof(t1));
  printf("sizeof(t2) = %d\n",sizeof(t2));
  printf("sizeof(t3) = %d\n",sizeof(t3));
printf("sizeof(t4) = %d\n",sizeof(t4));
}

