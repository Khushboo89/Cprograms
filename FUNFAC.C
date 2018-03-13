//wap to find factorial of number using function(without recursion)
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int a,res,n,r,b,c,d,com;
	clrscr();
	printf("Enter a number:\t");
	scanf("%d",&a);
	res=fact(a);
	printf("\nThe factorial of %d is: %d",a,res);
	printf("\nTo find nCr \nEnter the value of n :");
	scanf("%d",&n);
	printf("\nEnter the value of r :");
	scanf("%d",&r);
	b=fact(n);
	c=fact(n-r);
	d=fact(r);
	com=b/(c*d);
	printf("\nThe nCr value for n= %d and r =%d is %d",n,r,com);
	getch();
}
int fact(int n)
{
	int i,temp=1;
	for(i=1;i<=n;i++)
	   temp=temp*i;
	return temp;
}
