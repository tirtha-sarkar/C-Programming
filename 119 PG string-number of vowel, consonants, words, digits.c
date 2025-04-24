#include<stdio.h>
int main()
{
    char str[100],ch;
    int i, vowel, consonants, digit, word, other,capital, samll;

    printf("Ener a string = ");
    gets(str);

    i= vowel= consonants= word=digit=other=0;

    while((ch=str[i]) !='\0')
    {

        if(ch=='a' || ch=='u' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='U' || ch=='I' || ch=='O' || ch =='U' )
            vowel++;

        else if( (ch>='a' && ch<='z') || (ch>= 'A' && ch<= 'Z'))
            consonants++;

        else if(ch>='0' && ch<='9')
            digit++;


        else if (ch=='  ')
            word++;

        else
            other++;

        i++;
    }
    word++;

    printf("Number of vowel = %d\n",vowel);
    printf("Number of consonants = %d\n",consonants);
    printf("Number of digit= %d\n",digit);
    printf("Number of word = %d\n",word);
    printf("Number of other = %d\n",other);


}

