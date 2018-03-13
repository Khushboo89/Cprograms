#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()
{
	 float h,b,ar;
	 float pi=3.14;
	 int ch,c;

	clrscr();

	do
	{
		printf("\nArea of-");
		printf("\n1. Triangle \n2. Square \n3. Rectangle \n4. Circle");
		printf("\nEnter choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\nEnter height: ");
				scanf("%f",&h);
				printf("\nEnter base: ");
				scanf("%f",&b);
				ar= 0.5*h*b;
				printf("\nArea is: %f",ar);
				break;

			case 2: printf("\nEnter side: ");
				scanf("%f",&b);
				ar= pow(b,2);
				printf("\nArea is: %f",ar);
				break;

			case 3: printf("\nEnter length: ");
				scanf("%f",&h);
				printf("\nEnter breadth: ");
				scanf("%f",&b);
				ar= h*b;
				printf("\nArea is: %f",ar);
				break;

			case 4: printf("\nEnter radius: ");
				scanf("%f",&h);
				ar= (pi*h*h);
				printf("\nArea is: %f",ar);
				break;

			default:printf("\nInvalid choice!");
		}
		printf("\nDo you wish to continue?(press 0 =no and 1=yes)");
		scanf("%d",&c);
	}while(c==1);
	getch();
}


