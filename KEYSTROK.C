#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   char a;
   clrscr();
   printf("Enter the alphabet/number/special character :");
   scanf("%c",&a);
   i=(int)a;
   printf("\nEquivalent ASCII value of %c is %d",a,a);
   getch();
}