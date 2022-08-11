#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num>99 && num<1000)
	{
		printf("%d is a 3 digit number\n",num);
	}
	else
	{
		printf("%d is not a 3 digit number\n",num);
	}
	return 0;
}