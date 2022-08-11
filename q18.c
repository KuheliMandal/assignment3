#include <stdio.h>

int main()
{
  int month;
  printf(" Please Enter the Month Number 1 to 12 (Consider 1 = January, and 12 = December) \n  ");
  scanf("%d", &month);
  
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
  {
  	printf(" 31 Days in this Month\n");  	
  }
  else if ( month == 4 || month == 6 || month == 9 || month == 11 )
  {
  	printf(" 30 Days in this Month\n");  	
  }  
  else if ( month == 2 )
  {
  	printf(" Either 28 or 29 Days in this Month\n");  	
  } 
  else
    printf(" Please enter Valid Number between 1 to 12\n");
  
  return 0;
}