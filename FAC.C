//wap to find factorial of number using recursion
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int a,res;
	clrscr();
	printf("Enter a number:\t");
	scanf("%d",&a);
	res=fact(a);
	printf("\n The factorial of number is: %d",res);
	getch();
}
int fact(int b)       //recursion function
{
	if(b==0||b==1)
	 return 1;
	else
	 return b*fact(b-1);
}