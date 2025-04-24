/*#include<stdio.h>
struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Enter age : ");
        scanf("%d",&person[i].age);

        printf("Enter salary : ");
        scanf("%f", &person[i].salary);

    }

    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for person %d\n",i+1);
        printf("Age : %d\n",person[i].age);

        printf("Salary : %f\n",person[i].salary);


    }

}                     ****array within structure****
*/
#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d\n",i+1);

        printf("Enter name : ");
        scanf("%s",&person[i].name);

        printf("Enter age : ");
        scanf("%d",&person[i].age);

        printf("Enter salary : ");
        scanf("%f", &person[i].salary);

    }

    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for person %d\n",i+1);

        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);

        printf("Salary : %f\n",person[i].salary);

    }
    }

