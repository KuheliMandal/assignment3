#include<stdio.h> 
int main() 
{ 
int n;
printf("enter a number\n");
scanf("%d", &n);
if(n%7==0 || n%3==0 )
{
    printf(" Number is divisible by 7 and 3 \n");
} 
else
 printf(" Number is not divisible by 7 and 3\n");

 
    printf ("\n");
    return 0;
}