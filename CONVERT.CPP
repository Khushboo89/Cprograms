/* Write a program to convert the following
   1. Decimal to binary
   2. Decimal to octal
   3. Decimal to hexadecimal
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char check;
  do
  {
 long int num,ch,mod,rem,temp;
 float dec;
 long char hex[100];
 long int octal=0,decb=0;
 long int binary=0;
 long int base=1;
 long int i,j=0;
  cout<<" Enter the number before decimal :  ";
  cin>>num;
  cout<<" Enter the decimal part";
  cin>>base;
  temp=num;
  cout<<"\nThe available conversions are : "<<endl;
  cout<<" 1. Convert decimal to binary"<<endl;
  cout<<" 2. Convert decimal to octal"<<endl;
  cout<<" 3. Convert decimal to hexadecimal";
  cout<<"\nChoose the required coversion from the above list :";
  cin>>ch;
  switch(ch)
  {
    case 1: while(num>0)
	    {
	      mod=num%2;
	      binary=binary+mod*base;
	      base=base*10;
	      num=num/2;
	    }
	    cout<<"The binary represenation of "<<temp<<" is :"<<binary;
	    dec=0.00+dec;
	    while(dec>0)
	    {
	       rem=dec*2;
	       decb=
    break;
    case 2: while(num>0)
	    {
	      rem=num%8;
	      octal=octal+rem*base;
	      base=base*10;
	      num=num/8  ;
	     }
	    cout<<"The octal represenation of"<<temp<<" is :";
	    cout<<octal;
    break;
    case 3:
	    while(num!=0)
	    {
		mod=num%16;
		if (mod<10)
		   hex[j++]=48+mod;
		else
		   hex[j++]=55+mod;
		num=num/16;
	    }
	    cout<<"\n The hexadecimal representation of "<<temp<<" is :";
	    for(i=j-1;i>=0;i--)
	    cout<<hex[i];
     break;
    default:
	    cout<<" Invalid choice " ;
  }
cout<<" \n Do you want to continue (press y if yes) :";
cin>>check;
}while(check=='y'|| check=='Y') ;
getch();
}



