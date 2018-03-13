#include<stdio.h>
#include<conio.h>

void main()
{
  float num[5];
  float sum=0.0,avg;
  int i;
  clrscr();
  printf("Enter the 5 numbers :");
  for(i=0;i<=4;i++)
    scanf("%f",&num[i]);
  for(i=0;i<=4;i++)
   sum=sum+num[i];

  avg=sum/5;
  printf("\nThe average of 5 numbers is :%f",avg);
  getch();
}