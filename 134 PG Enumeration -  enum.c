#include<stdio.h>
enum day_of_week
{
    sun, mon, tue, wed, thu, fri, sat
};
int main()
{
    enum day_of_week day1, day2;
    day1 = fri;
    printf("day1 = %d\n",day1);
}
