/*program 32:WAP to HCF two given number*/
#include<stdio.h>
#include<conio.h>

void main()
{
   int num1,num2,hcf,temp,mod=1;
   clrscr();
   printf("Enter the two numbers :");
   scanf("%d %d",&num1,&num2);
   if(num1>num2)
   {
      temp=num1;
      num1=num2;
      num2=temp;
   }
   while(mod!=0)
   {
      mod=num2%num1;
      num2=num1;
      num1=mod;
   }
   hcf=num2;
   printf("\nHCF is %d ",hcf);
   getch();
}
