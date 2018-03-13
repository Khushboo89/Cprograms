//program:addition of two matrices
#include<stdio.h>
#include<conio.h>
void addm(int a[100][100],int b[100][100],int,int);


void main()
{
  int a[100][100],b[100][100],i,j,m,n;
  clrscr();
  printf("\nEnter no. of rows :");
  scanf("%d",&m);
  printf("Enter no. of column :");
  scanf("%d",&n);
  printf("Enter the elements of first array :\n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
      printf("Enter element at [%d][%d] :",i,j);
      scanf("%d",&a[i][j]);
    }
  printf("Enter the elements of second array :\n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
      printf("Enter element at [%d][%d] :",i,j);
      scanf("%d",&b[i][j]);
    }
  addm(a,b,m,n);

  getch();
}
void addm(int a[100][100],int b[100][100],int m ,int n)
{
  int c[100][100],i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("\nADDITION OF MATRICES:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\t%d",c[i][j]);
    }
    printf("\n");
  }

 }
