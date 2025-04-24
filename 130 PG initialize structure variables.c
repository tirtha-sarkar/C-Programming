#include<stdio.h>
//Global structure
struct person{
int age;
float salary;
};
int main()
{

    struct person  person1 = {21,23331.14};
    struct person  person2 = {23,4631.14};

    struct person person3;

    person3 = person2;

    printf("Person1 :  \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\nPerson2 :  \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);


    printf("\nPerson3 :  \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

}


