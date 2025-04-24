#include<stdio.h>
//Global structure
struct person{
int age;
float salary;

};
 struct person  person1, person2; //golobal veriable
int main()
{

    person1.age = 21;
    person1.salary  = 122331.6;

    printf("Person1 :  \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

     person2.age = 22;
    person2.salary  = 11.6;

    printf("\nPerson2 :  \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

}

