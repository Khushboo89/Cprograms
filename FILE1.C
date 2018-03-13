#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char s[100],ch;
 printf("input the file name:");
 gets(s);
 fp=fopen(s,"r");
 if(fp==NULL)
 {
  puts("file cannot open");
  exit();
 }
 ch=fgetc(fp);
 while(s!=EOF)
 {


