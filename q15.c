#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    if(a>-1 && a!=0)
    {
        printf("Number is  positive\n ");

    }
    else
    printf("Number is negetive\n");
    if(a==0)
    {
        printf("zero\n");
    }
    printf("\n");
    return 0;
}