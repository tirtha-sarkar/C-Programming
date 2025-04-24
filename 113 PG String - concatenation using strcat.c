//concatenation using strcat
/*#include<stdio.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Tirtha babu sarkar";

    strcat(str1,str2);

    printf("str1 =%s\n",str1);

}
//concatenation without using strcat
*/
#include<stdio.h>
int main()
{
    char str1[50] = "my name is";
    char str2[] = "Tirtha babu";

    int i=0, len=0, j=0;
    while(str1[i] !='\0')
    {
        i++;
        len++;
    }
    while (str2[j] != '\0')
    {
        str1[len +j] = str2[j];
        j++;
    }

    printf("str1 =%s\n", str1);
}
