#include<stdio.h>
#include<conio.h>
void main()
{
  int first,second,sum=0;
  clrscr();
  printf("Enter the first number : ");
  scanf("%d",&first);
  printf("\nEnter the second number : ");
  scanf("%d",&second);
  sum=first+second;
  printf("\nSum of %d and %d is : %d " ,first,second,sum);
  getch();
}