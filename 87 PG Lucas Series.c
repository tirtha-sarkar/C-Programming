#include<stdio.h>
void generateLucas(int numTerms)
{
    int first =2, second = 1;
    printf("Lucas Series up to %d terms : \n", numTerms);
    printf("%d %d ",first, second);
    for(int i = 3; i<=numTerms; i++)
    {
        int next = first + second;
        printf(" %d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}
int main()
{
    int numTerms;
    printf("Enter The number of terms series =");
    scanf("%d",&numTerms);

    generateLucas(numTerms);

    return 0;
}
