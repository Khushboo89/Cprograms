#include<stdio.h>
#include<conio.h>
void main()
{
  float c,f;
  clrscr();
  printf("Enter the height in cms :");
  scanf("%f",&c);
  f=c/30.48;
  printf("\nHeight in feet is %f ",f);
  getch();
}