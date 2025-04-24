#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("\nName : %s\n",p.name);
        printf("Age : %d\n",p.age);

        printf("Salary : %f\n",p.salary);

}

int main()
{
    struct person person1;
    strcpy(person1.name ," Tirtha sarkar");
    person1.age = 21;
    person1.salary = 21322;
    display(person1);

    strcpy(person1.name ," Puja sarkar");
    person1.age = 18;
    person1.salary = 0;
    display(person1);
}
