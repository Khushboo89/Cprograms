#include<stdio.h>
#include<conio.h>
void concat(int a[],int,int b[],int);
void main()
{
  int a[100],b[100],i,n,m;
  clrscr();
  printf("Enter the no. of elements in first array :");
  scanf("%d",&m);
  printf("Enter the elements of first array :\n");
  for(i=0;i<m;i++)
    scanf("%d",&a[i]);
  printf("Enter the no. of elements in second array :");
  scanf("%d",&n);
  printf("Enter the elements of second array :\n");
  for(i=0;i<n;i++)
    scanf("%d",&b[i]);
  concat(a,m,b,n);
  getch();
}
void concat(int a[],int m,int b[],int n)
{
  int i,c[100],k=0,j=0;
  for(i=0;i<n+m;i++)
  {
  if(i<m)
  {
   c[k]=a[i];
   k++;
  }
  else if (i>=m)
  {
   c[k]=b[j];
   j++;
   k++;
  }
  }
  printf("\nArray after concatenation :");
  for(i=0;i<k;i++)
  {
   printf("%d ",c[i]);
  }
}