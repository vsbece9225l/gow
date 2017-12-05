#include<stdio.h>
#include<string.h>
#define begin main
int begin()
{
 char str[50];
 int len;
 printf("enter the string:");
 gets(str);
 len=strlen(str);
 printf("length of the string is %d",len);
 getch();
 return 0;
 }
