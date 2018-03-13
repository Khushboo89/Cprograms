#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char num[100];
  int n,i;
  cout<<"enter the size";
  cin>>n;
  cout<<"enter the no.";
  for(i=0;i<n;i++)
  {
    cin>>num[i];
  }
   while(num>n)
	    {
	      mod=num%2;
	      num[i++]=mod;
	      base=base*10;
	      num=num/2;
	    }
