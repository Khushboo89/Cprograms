#include<stdio.h>
#include<conio.h>
//void delete(int a[],int);
void main()
{
  int a[100],pos,i=0,m,n,flag=0;
  clrscr();
  printf("Enter the no. of element :");
  scanf("%d",&m);
  printf("Enter the elements of array :\n");
  for(i=0;i<m;i++)
    scanf("%d",&a[i]);
  printf("Enter the element to be deleted :");
  scanf("%d",&n);
  for(i=0;i<m;i++)
  {
    if (a[i]==n)
    {
      pos=i;
      flag=1;
    }
  }
  if(flag==0)
    printf("\nElement not found ");
  else
  {
    for(i=pos;i<m-1;i++)
	a[i]=a[i+1];
    printf("\nArray after deletion %d :\n",n);
  for(i=0;i<m-1;i++)
    printf("%d ",a[i]);
  }
  getch();
}