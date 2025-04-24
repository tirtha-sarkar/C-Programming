#include<math.h>
int main()
{
    while (1)
    {
        int number, count=0;
        printf("Enter Any Number =");
        scanf("%d",&number);
        if (number <=1)
        {
            count = 1;
        }
        else
        {

            for (int i=2; i <= sqrt(number); i++)
            {
                if (number%i==0)
                {
                    count =1;
                    break;
                }
            }
        }
        if (count == 0)
        {
            printf("%d is a prime number\n",number);
        }
        else
        {
            printf("%d is Not Prime number\n",number);
        }
    }
}
