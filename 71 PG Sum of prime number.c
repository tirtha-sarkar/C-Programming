#include<math.h>
int main()
{
    int number, count=0, totalprimenumber=0, sumofprimenumber=0;

    for (int number=1; number <=10; number++)
   {
       count =0;
       if (number <=1){
        count = 1;
       }
       else{
        for (int i=2; i<=sqrt(number); i++){
            if (number%i==0){
                count=1;
                break;
            }
        }
       }

       if (count ==0){
        printf("%d\t",number);
        totalprimenumber++;
        sumofprimenumber = sumofprimenumber+number;
       }
   }
  printf("\nTotal Prime Number=%d\n",totalprimenumber);
  printf("Sum Of Prime Number=%d\n",sumofprimenumber);
  return 0;
    }


