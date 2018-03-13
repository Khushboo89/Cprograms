#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,add,sub,mult,div;
  int opt,ch;
  clrscr();
  do
  {
    add=0;
    printf("Enter the first number :");
    scanf("%f",&a);
    printf("\nEnter the second number :");
    scanf("%f",&b);
    printf("Arithmetic operation available are :");
    printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
    printf("\nEnter the no. of operation :");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:
	     add=a+b;
	     printf("\nThe sum of %f and %f is %f",a,b,add);
      break;
      case 2:
	     if(a>b)
	     {
	       sub=a-b;
	       printf("\nDifference of %f from %f is %f",b,a,sub);
	     }
	     else if(b>a)
	     {
	       sub=b-a;
	       printf("\nDifference of %f from %f is %f",a,b,sub);
	     }

	     else
	     {
	      sub=0;
	      printf("\nNumbers are equal");
	      printf("\nDifference of %f from %f is %f",b,a,sub);
	     }
      break;
      case 3:
	     mult=a*b;
	     printf("\nProduct of %f and %f is %f",a,b,mult);
      break;
      case 4:
	    if(b!=0)
	    {
	      div=a/b;
	      printf("\nDivision of %f by %f is %f",a,b,div);
	    }
	    else
	    printf("\nNot valid (second number cannot be zero)");
      break;
      default:
	      printf("\nNot a valid option");
   }
   printf("\nPress 1 to continue otherwise press 0 :");
   scanf("%d",&ch);
  }while(ch==1);
 getch();
}
