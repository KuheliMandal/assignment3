#include<stdio.h>
int main()
{
    int i;
    printf("enter number\n");
    scanf("%d", &i);
    if((i&2)==0)
    printf("Number is an even number\n");
    else
    printf("Number is an odd number\n");
    return 0;
}