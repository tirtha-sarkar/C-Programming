//Switch Keyword : switch, case, break, default
//Write a program that read a digit and display its spelling
#include<stdio.h>
int main()
{
    int digit;
    printf("Enter Any Digit=");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
          printf("Zero\n");
          break;
          case 1:
              break;
          printf("One\n");
          break;
          case 2:
          printf("Two\n");
          break;
          case 3:
          printf("Three\n");
          break;
          case 4:
          printf("Four\n");
          break;
          case 5:
          printf("Five\n");
          break;
          case 6:
          printf("Six\n");
          break;
          case 7:
          printf("Seven\n");
          break;
          case 8:
          printf("Eight\n");
          break;
          case 9:
          printf("Nine\n");
          break;
          default:
            printf("Not a valid digit");
    }
return 0;
}
