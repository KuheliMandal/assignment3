#include<stdio.h>
int main() {
   char ch;
 
   printf("Enter The Character\n");
   scanf("%c", &ch);
 
   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters\n");
   else
      printf("Character is Not Upper Case Letters\n");
 printf("\n");
   return (0);
}