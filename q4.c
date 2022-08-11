#include<stdio.h>
int main()
{
    int i;
    printf("enter number\n");
    scanf("%d", &i);
    if(i<=1000 && i>=99)
    printf("Yes\n");
    else
    printf("No\n");
    return 0;
}