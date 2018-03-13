/* Write a program to convert the following
   1. bianry to decimal
   2. binary to octal
   3. binary to hexadecimal
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char check;
  do
  {
   long int decimal=0;
   long  char hex[100];
   long int ch,num,temp,base,mod,rem,octal,i,j,binary,bas;
     base=1,octal=0,j=0,bas=1,binary=0;

     cout<<" Enter the number :";
     cin>>num;
     temp=num;
     cout<<"\nThe available conversions are : "<<endl;
     cout<<" 1. Convert binary to decimal"<<endl;
     cout<<" 2. Convert binary to octal"<<endl;
     cout<<" 3. Convert binary to hexadecimal";
     cout<<"\nChoose the required coversion from the above list :";
     cin>>ch;
     switch(ch)
     {
	case 1:
	       while(num>0)
	       {
		   mod=num%10;
		   decimal=decimal+mod*base;
		   base=base*2;
		   num=num/10;
	       }
	       cout<<"\n The decimal representation of "<<temp<<" is:";
	       cout<<decimal;
	break;
	case 2:
	       while(num>0)
	       {
		   mod=num%10;
		   decimal=decimal+mod*base;
		   base=base*2;
		   num=num/10;
	       }
	       cout<<"\n The decimal representation of "<<temp<<" is:";
	       cout<<decimal;
	       while(decimal>0)
	       {

	      rem=decimal%8;
	      binary=binary+rem*bas;
	      bas=bas*10;
	      decimal=decimal/8;
	    }
	    cout<<"\n The octal represenation of "<<temp<<" is :"<<binary;
    break;
	  case 3:
		  while(num>0)
	       {
		   mod=num%10;
		   decimal=decimal+mod*base;
		   base=base*2;
		   num=num/10;
	       }
	       cout<<"\n The decimal representation of "<<temp<<" is:";
	       cout<<decimal;
	       while(decimal>0)
	      {
		rem=decimal%16;
		if (rem<10)
		   hex[j++]=48+rem;
		else
		   hex[j++]=55+rem;
		   decimal=decimal/16;
	      }
	    cout<<"\n The hexadecimal representation of "<<temp<<" is :";
	    for(i=j-1;i>=0;i--)
	    cout<<hex[i];
    break;
	   default:
		cout<<"\n Invalid choice";
      }
  cout<<"\n Press Y or y to continue :";
  cin>>check;
  }while(check=='y'||check=='Y');
  getch();
}