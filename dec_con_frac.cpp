#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	char c;
	do
	{
		int i=0,cnt=0;
		int q,r,re[100],ch,n,k;
		float num;
		
		cout<<"\nEnter the decimal: ";
		cin>>num;
		n= abs(num);
		num=num-n;
		
		cout<<"\nConversion to:";
		cout<<"\n1. Binary \n2. Octal \n3. Hexadecimal";
		cout<<"\nEnter choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
					while(n!=0)
					{
						r=n%2;
						re[i]=r;
						i++;
						n=n/2;
					}
					cout<<"\nThe binary equivalent is: ";
					for(int j=i-1; j>=0; j--)
						cout<<re[j];
					cout<<".";
					k=i;
					while(cnt!=4)
					{
						num=num*2;
						n=num;
						re[i]=n;
						num=num-n;
						i++;
						cnt++;	
					}
					for(int j=k; j<i; j++)
						cout<<re[j];
					
											
					break;
			case 2:
					while(n!=0)
					{
						r=n%8;
						re[i]=r;
						i++;
						n=n/8;
					}
					cout<<"\nThe octal equivalent is: ";
					for(int j=i-1; j>=0; j--)
						cout<<re[j];
					cout<<".";
					k=i;
					while(cnt!=4)
					{
						num=num*8;
						n=num;
						re[i]=n;
						num=num-n;
						i++;
						cnt++;	
					}
					for(int j=k; j<i; j++)
						cout<<re[j];
										
					break;
			case 3:
					while(n!=0)
					{
						r=n%16;
						re[i]=r;
						i++;
						n=n/16;
					}
					cout<<"\nThe hexadecimal equivalent is: ";
					for(int j=i-1; j>=0; j--)
					{
						if(re[j]==10)
							cout<<"A";
						else if(re[j]==11)
							cout<<"B";
						else if(re[j]==12)
							cout<<"C";
						else if(re[j]==13)
							cout<<"D";
						else if(re[j]==14)
							cout<<"E";	
						else if(re[j]==15)
							cout<<"F";						
						else 
							cout<<re[j];
					}
					cout<<".";
					k=i;
					while(cnt!=4)
					{
						num=num*16;
						n=num;
						re[i]=n;
						num=num-n;
						i++;
						cnt++;	
					}
					for(int j=k; j<i; j++)
					{
						if(re[j]==10)
							cout<<"A";
						else if(re[j]==11)
							cout<<"B";
						else if(re[j]==12)
							cout<<"C";
						else if(re[j]==13)
							cout<<"D";
						else if(re[j]==14)
							cout<<"E";	
						else if(re[j]==15)
							cout<<"F";						
						else 
							cout<<re[j];
					}
					break;
			default: cout<<"\nInvalid choice";
		}
		cout<<"\nDo you wish to continue?";
		cin>>c;
	}while((c=='y'||c=='Y'));

	return 0;	
	
}
