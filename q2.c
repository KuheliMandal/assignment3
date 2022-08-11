#include<stdio.h>
int main()
{
    int a;
    printf("enter number\n");
    scanf("%d", &a);
    if(a%5==0)
        printf("Yes Divisible\n");
    else
    printf("Not-Divisible\n");
    return 0;
}